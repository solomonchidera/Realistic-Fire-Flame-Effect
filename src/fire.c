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

void initializeFire()
{
	for (int x = 0; x < FIRE_WIDTH; x++)
	{
		for (int y = 0; y < FIRE_HEIGHT; y++)
		{
			firePixels[x][y] = 0;
		}
	}

	/* Initialize the fire color palette */
	for (int i = 0; i < FIRE_COLORS; i++)
	{
		fireColorPalette[i][0] = i * 7;
		fireColorPalette[i][1] = 0;
		fireColorPalette[i][2] = 0;
	}
}

void updateFire()
{
	for (int x = 0; x < FIRE_WIDTH; x++)
	{
		for (int y = 1; y < FIRE_HEIGHT; y++)
		{
			int randIndex = rand() % 3;
			int decay = rand() % 3;
			int newX = x + randIndex - 1;

			if (newX >= 0 && newX < FIRE_WIDTH - 1)
			{
				int newFirePixel = firePixels[newX][y - 1] - decay;
				if (newFirePixel < 0)
				{
					newFirePixel = 0;
				}
				firePixels[x][y] = newFirePixel;
			}
		}
	}
}

void renderFire(SDL_Renderer *renderer)
{
	for (int x = 0; x < FIRE_WIDTH; x++)
	{
		for (int y = 0; y < FIRE_HEIGHT; y++)
		{
			int firePixel = firePixels[x][y];
			SDL_SetRenderDrawColor(renderer, fireColorPalette[firePixel][0], fireColorPalette[firePixel][1], fireColorPalette[firePixel][2], 255);
			SDL_RenderDrawPoint(renderer, x, SCREEN_HEIGHT - y);
		}
	}
}
