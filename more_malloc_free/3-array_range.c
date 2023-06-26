#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - arranges the array min to max
 * @min: the start of the array
 * @max: the end of the array
 *
 * Return: the pointer or NULL for min > max or failure
 */

int *array_range(int min, int max)
{
	int *a, b, c;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	a = malloc(b * sizeof(int));

	if (a == 0)
		return (NULL);

	for (c = 0; c < b; c++)
		a[c] = min++;

	return (a);
}
