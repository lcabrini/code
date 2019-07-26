#! /usr/bin/env python3

import pygame
import random

SCREEN_WIDTH = 600
SCREEN_HEIGHT = 600
MIN_SPEED = 1
MAX_SPEED = 30
DEFAULT_SPEED = 1
SPEED_STEP = 1
MIN_LINEWIDTH = 1
MAX_LINEWIDTH = 10
DEFAULT_LINEWIDTH = 1
LINEWIDTH_STEP = 1
FPS = 60

pygame.init()
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Lines")
clock = pygame.time.Clock()
red = True
green = True
blue = True
linewidth = DEFAULT_LINEWIDTH
speed = DEFAULT_SPEED
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
            elif event.key == pygame.K_UP and speed < MAX_SPEED:
                speed += SPEED_STEP
            elif event.key == pygame.K_DOWN and speed > MIN_SPEED:
                speed -= SPEED_STEP
            elif event.key == pygame.K_r:
                red = not red
            elif event.key == pygame.K_g:
                green = not green
            elif event.key == pygame.K_b:
                blue = not blue
            elif event.key == pygame.K_LEFT and linewidth > MIN_LINEWIDTH:
                linewidth -= LINEWIDTH_STEP
            elif event.key == pygame.K_RIGHT and linewidth < MAX_LINEWIDTH:
                linewidth += LINEWIDTH_STEP

    if clear:
        screen.fill((0, 0, 0))
        clear = False
    else:
        for i in range(speed):
            x1 = random.randrange(0, SCREEN_WIDTH)
            x2 = random.randrange(0, SCREEN_WIDTH)
            y1 = random.randrange(0, SCREEN_HEIGHT)
            y2 = random.randrange(0, SCREEN_HEIGHT)
            r = random.randrange(0, 256) if red else 0
            g = random.randrange(0, 256) if green else 0
            b = random.randrange(0, 256) if blue else 0
            pygame.draw.line(screen, (r, g, b), (x1, y1), (x2, y2), 
                    linewidth)
    clock.tick(FPS)
    pygame.display.flip()

pygame.quit()
