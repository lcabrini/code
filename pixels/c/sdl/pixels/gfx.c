#include "gfx.h"

void init_sdl(void)
{
    int wflags = 0;
    int rflags = SDL_RENDERER_ACCELERATED;

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
            SDL_TEXTUREACCESS_STREAMING,
            SCREEN_WIDTH,
            SCREEN_WIDTH);
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
    memset(pixbuf, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(int));
}

void draw(void)
{
    unsigned int x, y;
    unsigned char r, g, b;
    unsigned int o;
    unsigned int i;

    for (i = 0; i < speed; ++i)
    {
        x = rand() % SCREEN_WIDTH;
        y = rand() % SCREEN_HEIGHT;

        r = red ? rand() % 255 : 0;
        g = green ? rand() % 255 : 0;
        b = blue ? rand() % 255 : 0;

        o = SCREEN_WIDTH * y * sizeof(int) + x * sizeof(int);
        pixbuf[o] = b;
        pixbuf[o+1] = g;
        pixbuf[o+2] = r;
        pixbuf[o+3] = SDL_ALPHA_OPAQUE;
    }
}

void update(void)
{
    SDL_UpdateTexture(texture, NULL, pixbuf, SCREEN_WIDTH / sizeof(int));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

