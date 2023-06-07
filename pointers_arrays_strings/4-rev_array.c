#include "main.h"

/**
 * reverse_array - prints an array of integers in reverse
 * @a: array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n / 2; b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}
