
#!/usr/bin/env python3
# coding: UTF-8


import rclpy
from rclpy.node import Node
import math
import socket
import struct
import RPi.GPIO as GPIO
import time

from message_info.msg import RobotCommands

GPIO.setwarnings(False)

class RealSender(Node):
    def __init__(self):
        super().__init__('real_send')
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(26,GPIO.OUT)
        self.flag = False
        self.time_period = 1.0
        self.create_timer(self.time_period, self.callback)
        self._sub_commands = self.create_subscription(
                RobotCommands,
                'robot_commands',
                self._send, 10)
    def callback(self):
        GPIO.output(26, self.flag)
        self.flag = not self.flag

    def _send(self, msg):
        for command in msg.commands:
            vel_norm = math.sqrt(
                    math.pow(command.vel_surge, 2) + 
                    math.pow(command.vel_sway,2))

def main(args=None):
    rclpy.init(args=args)
    try:
        sender = RealSender()
        rclpy.spin(sender)
    except KeyboardInterrupt:
        pass
    finally:
        sender.destroy_node()
        GPIO.cleanup
        rclpy.shutdown()

if __name__ == '__main__':
    main()

