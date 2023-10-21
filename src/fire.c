#include "fire.h"

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


