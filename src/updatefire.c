#include "fire.h"
/**
 * updateFire - Update the fire in real time
 *
 * Return: Nothing
 */

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

