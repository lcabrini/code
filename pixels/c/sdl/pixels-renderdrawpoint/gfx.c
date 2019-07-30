#include "gfx.h"

void init_sdl(void)
{
    int wflags = 0;
    int rflags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE;
    int tflags = SDL_TEXTUREACCESS_TARGET;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        die("Could not initialize SDL");

    window = SDL_CreateWindow(
            SCREEN_TITLE,
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            wflags);
    if (!window)
        die("Could not create window");

    renderer = SDL_CreateRenderer(window, -1, rflags);
    if (!renderer)
        die("Could not create renderer");

    texture = SDL_CreateTexture(
            renderer,
            SDL_PIXELFORMAT_ARGB8888,
            tflags,
            SCREEN_WIDTH,
            SCREEN_HEIGHT);
    if (!texture)
        die("Could not create texture");
}

void close_sdl(void)
{
    if (texture)
        SDL_DestroyTexture(texture);

    if (renderer)
        SDL_DestroyRenderer(renderer);

    if (window)
        SDL_DestroyWindow(window);

    SDL_Quit();
}

void clear_screen(void)
{
    SDL_SetRenderTarget(renderer, texture);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_SetRenderTarget(renderer, NULL);
}

void draw(void)
{
    unsigned int x, y;
    unsigned char r, g, b;
    unsigned int i;

    SDL_SetRenderTarget(renderer, texture);

    for (i = 0; i < speed; ++i)
    {
        x = rand() % SCREEN_WIDTH;
        y = rand() % SCREEN_HEIGHT;

        r = red ? rand() % 255 : 0;
        g = green ? rand() % 255 : 0;
        b = blue ? rand() % 255 : 0;

        SDL_SetRenderDrawColor(renderer, r, g, b, 255);
        SDL_RenderDrawPoint(renderer, x, y);
    }

    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_SetRenderTarget(renderer, NULL);
}

void update(void)
{
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}
