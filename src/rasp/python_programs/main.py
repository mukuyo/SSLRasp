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

        GPIO.setmode(GPIO.BCM)
        GPIO.setup(26,GPIO.OUT)
        GPIO.setup(18,GPIO.IN)
        GPIO.setup(12,GPIO.OUT)
        kick = GPIO.PWM(12, 0.001)
        pi.start(0)

        self.ser = serial.Serial("/dev/ttyS0", 115200, timeout=0.5)
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
        
    def timer_callback(self):
        self.realcommands.ball_catch = GPIO.input(18)
        self.pub_commands.publish(self.realcommands)

    def pc_callback(self, msg):
        packet = bytearray()
        packet.append(0xFF)

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

                dribble_power = command.dribble_power
                kick_power = command.kick_power*10
                pi.ChangeDutyCycle(kick_power)

                self.M[0] = math.sin(math.radians(vel_theta - 60)) * vel_norm
                self.M[1] = math.sin(math.radians(vel_theta - 135)) * vel_norm
                self.M[2] = math.sin(math.radians(vel_theta - 225)) * vel_norm
                self.M[3] = math.sin(math.radians(vel_theta - 300)) * vel_norm
                
                break

        for i in range(4):
            #self.M[i] *= vel_norm / max_pow
            self.M[i] += vel_angular
            self.M[i]*=100

            if self.M[i] > 100:
                self.M[i] = 100
            elif self.M[i] < -100:
                self.M[i] = -100
            
            self.M[i] += 100
            #print(self.M[i])
            packet.append(int(self.M[i]))
       
        packet.append(int(dribble_power))
        packet.append(int(kick_power))

        self.ser.write(packet)

    def serial_close(self):
        for i in range(20):
            packet = bytearray()
            packet.append(0xFF)
            for i in range(4):
                self.M[i] = 100
                packet.append(int(self.M[i]))          
            
            packet.append(0)
            packet.append(0)
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

