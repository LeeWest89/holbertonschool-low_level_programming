#include "main.h"

/**
 * print_ array - prints the number associated with the array.
 * @*a: the array
 * @n: the number from the array
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);

		if (b != n - 1)
			printf(", ");

		b++;
	}

	printf("\n");
}
