#!/usr/bin/env python3
# coding: UTF-8

import cv2
import numpy as np
import math

def hi():
    print("HI")

class Camera:
  def __init__(self):
    self.LOW_COLOR = np.array([0, 35, 204])
    self.HIGH_COLOR = np.array([32, 255, 255])

    self.AREA_RATIO_THRESHOLD = 0.005
