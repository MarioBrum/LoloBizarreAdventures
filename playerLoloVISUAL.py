import pygame

import math
import random

import pygame
from pygame import mixer

class loloVisual:

    def __init__(self,x,y,sprite,loloCode):
        self.x = x
        self.y = y
        self.sprite = sprite
        self.loloCode = loloCode

    def getX(self):
        return self.x

    def getY(self):
        return self.y