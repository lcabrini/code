#ifndef GFX_H
#define GFX_H

#include <SDL2/SDL.h>
#include "common.h"

#define SCREEN_TITLE "Pixels"
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 400

void init_sdl(void);
void close_sdl(void);

void clear_screen(void);
void draw(void);
void update(void);

extern void die(char *message);

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Texture *texture;

#endif /* GFX_H */
