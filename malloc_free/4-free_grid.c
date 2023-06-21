#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees the grid
 * @grid: the grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}

	free(grid);
}
