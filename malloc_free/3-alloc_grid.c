#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns the pointer to a 2d array of integers
 * @width: thw width of the array
 * @height: the height of the array
 *
 * Return: NULL on failure or if w and h are 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	return (NULL);

	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));

		if (a[b] == NULL)
		{
			for (c = 0; c < i; c++)
				free(a[c]);
			free(a);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}

	return (a);

}
