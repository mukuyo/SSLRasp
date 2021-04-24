
#!/usr/bin/env python3
# coding: UTF-8

import rclpy
from rclpy.node import Node
import math
import socket
import struct
import RPi.GPIO as GPIO

from message_info.msg import RobotCommands
GPIO.setmode(GPIO.BOARD)
class RealSender(Node):
    def __init__(self):
        super().__init__('real_send')
        #GPIO.setmode(GPIO.BOARD)
        #GPIO.setup(26,GPIO.OUT)

        self._sub_commands = self.create_subscription(
                RobotCommands,
                'robot_commands',
                self._send, 10)

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
        rclpy.shutdown()

if __name__ == '__main__':
    main()

