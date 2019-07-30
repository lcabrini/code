#include "event.h"

void handle_events(void)
{
    SDL_Event e;

    while (SDL_PollEvent(&e))
    {
        switch (e.type)
        {
            case SDL_QUIT:
                exit(0);
                break;

            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
                {
                    case SDLK_q:
                        exit(0);
                        break;

                    case SDLK_c:
                        clear_screen();
                        break;

                    case SDLK_UP:
                        if (speed < MAX_SPEED) speed += 10;
                        break;

                    case SDLK_DOWN:
                        if (speed > MIN_SPEED) speed -= 10;
                        break;

                    case SDLK_r:
                        flags ^= RED_FILTER;
                        break;

                    case SDLK_g:
                        flags ^= GREEN_FILTER;
                        break;

                    case SDLK_b:
                        flags ^= BLUE_FILTER;
                        break;
                }
        }
    }
}
