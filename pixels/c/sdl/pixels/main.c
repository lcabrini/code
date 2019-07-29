#include "main.h"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    atexit(close_sdl);
    init_sdl();
    speed = DEFAULT_SPEED;
    flags = RUNNING | RED_FILTER | GREEN_FILTER | BLUE_FILTER;
    clear_screen();
    while (running)
    {
        handle_events();
        draw();
        update();
    }

    return 0;
}

void die(char *message)
{
    fprintf(stderr, "%s: %s\n", message, SDL_GetError());
    exit(1);
}
