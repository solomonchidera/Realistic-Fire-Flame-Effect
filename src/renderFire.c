#include "fire.h"

/**
 * renderFire - render fire in real time
 *
 * return: nothing
 */

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
