#!/usr/bin/env python3
# coding: UTF-8


import rclpy
from rclpy.node import Node
import math
import socket
import struct
import RPi.GPIO as GPIO
import time
import serial
import struct
import cv2
import numpy as np
import math

from message_info.msg import RobotCommands, RealCommands


GPIO.setwarnings(False)

class RealSender(Node):
    def __init__(self):
        super().__init__('receiver')
        self.camera = Camera()
        self._MAX_VEL_NORM = 4.0 # m/s
        self._MAX_VEL_ANGULAR = 2.0*math.pi
        self.motor_limit = 0

        GPIO.setmode(GPIO.BCM)
        GPIO.setup(26,GPIO.OUT)
        GPIO.setup(21,GPIO.IN)
        
        self.ser = serial.Serial("/dev/ttyACM0", 115200, timeout=0.5)
        self.flag = False   
        self.MY_ID = 0
        self.realcommands = RealCommands()
        self.time_period = 0.016
        self.create_timer(self.time_period, self.timer_callback)
        self._sub_commands = self.create_subscription(
                RobotCommands,
                'robot_commands',
                self.pc_callback, 10)
        self.pub_commands = self.create_publisher(
            RealCommands,
            'real_commands', 10)
        self.M = [0, 0, 0, 0]
        self.flag = False
        self.angular_rem = 0
        self.angular_rem2 = 0
        
    def timer_callback(self):
        self.realcommands.ball_catch = GPIO.input(21)
        self.realcommands.degree_ball_robot = self.camera.degree_ball_robot
        self.pub_commands.publish(self.realcommands)
  
        #self.camera.capture()
        if self.flag == False:
            packet = bytearray()
            packet.append(0xFF)
            packet.append(self.motor_limit)
            
            for i in range(4):
                self.M[i] = 100
                packet.append(int(self.M[i]))

            #self.ser.write(packet)
       
        self.flag = False
      

    def pc_callback(self, msg):
        self.flag = True

        packet = bytearray()

        packet.append(0xFF)
        
        self.motor_limit = 40
        packet.append(self.motor_limit)

        for command in msg.commands:
            if command.robot_id == self.MY_ID:
                vel_norm = math.sqrt(math.pow(command.vel_surge, 2) + math.pow(command.vel_sway, 2))
                
                if vel_norm >1:
                    vel_norm =1
                elif vel_norm < 0:
                    vel_norm = 0
                
                vel_theta = math.atan2(command.vel_surge, -command.vel_sway) - math.radians(90)    
                if vel_theta < 0:
                    vel_theta += 2.0 * math.pi
                vel_theta =math.degrees(vel_theta)
                vel_theta += 0

                vel_angular = command.vel_angular
                
                if math.fabs(vel_angular) > self._MAX_VEL_ANGULAR:
                    vel_angular = math.copysign(self._MAX_VEL_ANGULAR, vel_angular)
                vel_angular /= self._MAX_VEL_ANGULAR

                dribble_power = command.dribble_power
                kick_power = command.kick_power

                self.M[0] = math.sin(math.radians(vel_theta - 60)) * vel_norm
                self.M[1] = math.sin(math.radians(vel_theta - 135)) * vel_norm
                self.M[2] = math.sin(math.radians(vel_theta - 225)) * vel_norm
                self.M[3] = math.sin(math.radians(vel_theta - 300)) * vel_norm
                
                break

        max_pow = 1
        d = (vel_angular - self.angular_rem) / 0.016
        self.angular_rem = vel_angular
        #pid = vel_angular * 1.2 + d * 0.25
        pid = vel_angular * 1.2 + d * 0.05
        #pid = vel_angular * 1.6;
        for i in range(4):
            #self.M[i] *= vel_norm / max_pow
            self.M[i] += pid
            self.M[i]*=100

            if self.M[i] > 100:
                self.M[i] = 100
            elif self.M[i] < -100:
                self.M[i] = -100
            
            self.M[i] += 100
            #print(self.M[i])
            packet.append(int(self.M[i]))
       
        packet.append(int(dribble_power))
        packet.append(int(0))
        self.ser.write(packet)

    def serial_close(self):
        packet = bytearray()
        packet.append(0xFF)
        packet.append(self.motor_limit)
        for i in range(4):
            self.M[i] = 100
            packet.append(int(self.M[i]))
          
        packet.append(0)
        packet.append(0)
        self.ser.write(packet)
        self.ser.close()

class Camera:
    def __init__(self):
        self.LOW_COLOR = np.array([0, 68, 176])
        self.HIGH_COLOR = np.array([179, 255, 255])
        self.wide = 0
        self.AREA_RATIO_THRESHOLD = 0.005
        self.appear = False
        # webカメラを扱うオブジェクトを取得
        self.degree_ball_robot = 0.0
        self.cap = cv2.VideoCapture(-1)
    
    def capture(self):
        if(self.cap.isOpened()):
            ret,frame = self.cap.read()

            if ret is False:
                print("cannot read image")

            # 位置を抽出
            pos = self.find_specific_color(
                frame,
                self.AREA_RATIO_THRESHOLD,
                self.LOW_COLOR,
                self.HIGH_COLOR
            )
            
            if pos is not None:
                # 抽出した座標に丸を描く
                cv2.circle(frame,pos,10,(0,0,255),-1)
                #print(pos[0])
                self.degree_ball_robot = ((self.wide / 2) - pos[0]) / ((self.wide / 2) / 31.1)
                #print(self.degree_ball_robot)
            else:
                self.degree_ball_robot = 1000.0
            # 画面に表示する
            #cv2.imshow('frame',frame)

            # キーボード入力待ち
            key = cv2.waitKey(1) & 0xFF

            # qが押された場合は終了する
            #if key == ord('q'):
            #    break
        
        else:
            self.cap.release()
            cv2.destroyAllWindows()

    def find_specific_color(self,frame,AREA_RATIO_THRESHOLD,LOW_COLOR,HIGH_COLOR):

        # 高さ，幅，チャンネル数
        h,w,c = frame.shape
        self.wide = w
        #print(h)
        # h = 480, w =  640find_specific_color
        # hsv色空間に変換
        hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
    
        # 色を抽出する
        ex_img = cv2.inRange(hsv,LOW_COLOR,HIGH_COLOR)

        # 輪郭抽出
        contours,hierarchy = cv2.findContours(ex_img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
    
        # 面積を計算
        areas = np.array(list(map(cv2.contourArea,contours)))

        if len(areas) == 0 or np.max(areas) / (h*w) < AREA_RATIO_THRESHOLD:
            # 見つからなかったらNoneを返す
            #print("the area is too small")
            self.appear = False
            return None
        else:
            self.appear = True
            # 面積が最大の塊の重心を計算し返す
            max_idx = np.argmax(areas)
            max_area = areas[max_idx]
            result = cv2.moments(contours[max_idx])
            x = int(result["m10"]/result["m00"])
            y = int(result["m01"]/result["m00"])
            return (x,y)
            
def main(args=None):
    rclpy.init(args=args)
    try:
        sender = RealSender()
        rclpy.spin(sender)
    except KeyboardInterrupt:
        pass
    finally:
        sender.serial_close()
        sender.destroy_node()
        GPIO.cleanup
        rclpy.shutdown()

if __name__ == '__main__':
    main()

