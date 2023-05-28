#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: the first number.
 */

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 98; a++)
			printf("%d, ", a);
	}
	else
	{
		for (a = n; a > 98; a--)
			printf("%d, ", a);
	}

	printf("98\n");
}
