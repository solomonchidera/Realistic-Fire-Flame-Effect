#ifndef FIRE_H
#define FIRE_H
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define FIRE_WIDTH 80
#define FIRE_HEIGHT 60
#define FIRE_COLORS 36

int firePixels[FIRE_WIDTH][FIRE_HEIGHT];
int fireColorPalette[FIRE_COLORS][3];

#endif
