#pragma once
#include <sdl_all.h>

typedef struct Application {
    SDL_Renderer *renderer;
    SDL_Window *window;
//    int left;
//    int right;
//    int quit;
} App;

App *applying();
void erode_applying();
