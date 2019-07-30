#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL2/SDL.h>
#include "common.h"

void die(char *message);

extern void init_sdl(void);
extern void close_sdl(void);
extern void clear_screen(void);
extern void draw(void);
extern void update(void);
extern void handle_events(void);

#endif /* MAIN_H */
