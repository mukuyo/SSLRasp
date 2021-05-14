
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
import  struct

from message_info.msg import RobotCommands

GPIO.setwarnings(False)

class RealSender(Node):
    def __init__(self):
        super().__init__('receiver')
        self._MAX_VEL_NORM = 4.0 # m/s
        self._MAX_VEL_ANGULAR = 2.0*math.pi

        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(26,GPIO.OUT)
        self.ser = serial.Serial("/dev/ttyACM0", 115200, timeout=0.5)
        self.flag = False
        self.MY_ID = 0
        self.time_period = 2
        self.create_timer(self.time_period, self.timer_callback)
        self._sub_commands = self.create_subscription(
                RobotCommands,
                'robot_commands',
                self.pc_callback, 10)
        self.M = [0, 0, 0, 0]
        self.flag = False
        
    def timer_callback(self):
        if self.flag == False:
            for i in range(4):
                self.M[i] = 0

            packet = bytearray()
            packet.append(0xFF)
            packet.append(motor_limit)
            packet.append(int(self.M[i]))

            self.ser.write(packet)

        self.flag = False
        
        #print(self.M)

    def pc_callback(self, msg):
        self.flag = True;

        packet = bytearray()

        packet.append(0xFF)
        
        motor_limit = 40
        packet.append(motor_limit)

        for command in msg.commands:
            if command.robot_id == self.MY_ID:
                vel_norm = math.sqrt(math.pow(command.vel_surge, 2) + math.pow(command.vel_sway, 2))
                
                if vel_norm > self._MAX_VEL_NORM:
                    vel_norm =self._MAX_VEL_NORM
                elif vel_norm < 0:
                    vel_norm = 0
                
                vel_norm*=100

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

                self.M[0] = math.sin(math.radians(vel_theta - 60))*vel_norm
                self.M[1] = math.sin(math.radians(vel_theta - 135))*vel_norm
                self.M[2] = math.sin(math.radians(vel_theta - 225))*vel_norm
                self.M[3] = math.sin(math.radians(vel_theta - 300))*vel_norm
                
                print(vel_theta)
                break

        max_pow = 1
        pid = vel_angular * 1

        for i in range(4):
            self.M[i] *= vel_norm / max_pow
            self.M[i] += pid

            if self.M[i] > 100:
                self.M[i] = 100
            elif self.M[i] < -100:
                self.M[i] = -100
            
            self.M[i] += 100

            packet.append(int(self.M[i]))
        
        self.ser.write(packet)

    def serial_close(self):
        for i in range(4):
            self.M[i] = 0

        packet = bytearray()
        packet.append(0xFF)
        packet.append(motor_limit)
        packet.append(int(self.M[i]))

        self.ser.write(packet)

        self.ser.close()

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

