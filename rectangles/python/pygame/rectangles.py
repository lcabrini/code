#! /usr/bin/env python3

import pygame
import random

SCREEN_WIDTH = 600
SCREEN_HEIGHT = 600
DEFAULT_LINEWIDTH = 1
MIN_LINEWIDTH = 1
MAX_LINEWIDTH = 10
LINEWIDTH_STEP = 1
DEFAULT_SPEED = 1
MIN_SPEED = 1
MAX_SPEED = 10
SPEED_STEP = 1
FPS = 60

pygame.init()
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Rectangles")
clock = pygame.time.Clock()
red = True
green = True
blue = True
linewidth = DEFAULT_LINEWIDTH
fill = False
speed = DEFAULT_SPEED
clear = False
running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_q:
                running = False
            elif event.key == pygame.K_c:
                clear = True
            elif event.key == pygame.K_r:
                red = not red
            elif event.key == pygame.K_g:
                green = not green
            elif event.key == pygame.K_b:
                blue = not blue
            elif event.key == pygame.K_UP and speed < MAX_SPEED:
                speed += SPEED_STEP
            elif event.key == pygame.K_DOWN and speed > MIN_SPEED:
                speed -= SPEED_STEP
            elif event.key == pygame.K_LEFT and linewidth > MIN_LINEWIDTH:
                linewidth -= LINEWIDTH_STEP
            elif event.key == pygame.K_RIGHT and linewidth < MAX_LINEWIDTH:
                linewidth += LINEWIDTH_STEP
            elif event.key == pygame.K_f:
                fill = not fill

    if clear:
        screen.fill((0, 0, 0))
        clear = False
    else:
        lw = 0 if fill else linewidth
        for i in range(speed):
            x = random.randrange(0, SCREEN_WIDTH)
            y = random.randrange(0, SCREEN_HEIGHT)
            w = random.randrange(0, SCREEN_WIDTH - x)
            h = random.randrange(0, SCREEN_HEIGHT - y)
            r = random.randrange(0, 256) if red else 0
            g = random.randrange(0, 256) if green else 0
            b = random.randrange(0, 256) if blue else 0
            pygame.draw.rect(screen, (r, g, b), pygame.Rect(x, y, w, h), lw)
    clock.tick(FPS)
    pygame.display.flip()

pygame.quit()
