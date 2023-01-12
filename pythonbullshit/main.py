import pygame

import math
import random
import JogoExecucao as je

import pygame
from pygame import mixer

# Intialize the pygame
pygame.init()

# create the screen
screen = pygame.display.set_mode((800, 600))

#Title and Icon
pygame.display.set_caption("Lolo Bizarre Adventure")
icon = pygame.image.load('loloIcon.png')
pygame.display.set_icon(icon)

#Menu

menu = pygame.image.load('LoloMenu.png')

#cria uma instancia de execucao
#jogo = je.Execucao

#roda o jogo
#jogo.executa


#playerImg = pygame.image.load('lolo.png') ##arrumar a imagem do lolo, dividir sprites
#def player(x,y):
#    screen.blit(playerImg,(x,y))

#Game loop
running = True
while running:

    #screen.fill((75,0,130))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        screen.blit(menu,(0,0))
        #player(300,200)
        
    pygame.display.update()
