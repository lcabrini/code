#! /usr/bin/env python3

import pygame
import pygame.gfxdraw
import random

pygame.init()
screen = pygame.display.set_mode((640, 400))
pygame.display.set_caption("Pixels")
clock = pygame.time.Clock()
red = True
green = True
blue = True
speed = 10
running = True
clear = False
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_c:
                clear = True
            elif event.key == pygame.K_q:
                running = False
            elif event.key == pygame.K_UP and speed < 100:
                speed += 10
            elif event.key == pygame.K_DOWN and speed > 10:
                speed -= 10
            elif event.key == pygame.K_r:
                red = not red
            elif event.key == pygame.K_g:
                green = not green
            elif event.key == pygame.K_b:
                blue = not blue

    if clear:
        screen.fill((0, 0, 0))
        clear = False
    else:
        for i in range(speed):
            x = random.randrange(0, 640)
            y = random.randrange(0, 640)
            r = random.randrange(0, 256) if red else 0
            g = random.randrange(0, 256) if green else 0
            b = random.randrange(0, 256) if blue else 0
            pygame.gfxdraw.pixel(screen, x, y, (r, g, b))
    clock.tick(60)
    pygame.display.flip()
    
pygame.quit()
