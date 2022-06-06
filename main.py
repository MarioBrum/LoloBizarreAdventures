import pygame

import math
import random

import pygame
from pygame import mixer

# Intialize the pygame
pygame.init()

# create the screen
screen = pygame.display.set_mode((800, 600))

#Title and Icon
pygame.display.set_caption("Lolo Bizarre Adventures")
icon = pygame.image.load('loloIcon.png')
pygame.display.set_icon(icon)

#Game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

playerImg = pygame.image.load('lolo.png') ##arrumar a imagem do lolo, dividir sprites
def player(x,y):
    screen.blit(player)