#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of 2 diagonals in a square matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < size; b++)
	{
		c += *(a + b * size + b);
		d += *(a + b * size + (size - b - 1));
	}
	printf("%d, %d\n", c, d);
}
