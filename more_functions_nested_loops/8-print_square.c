#include "main.h"
/**
 * print_square - prints a square with #.
 *
 * @size: the size of the square to be printed.
 */
void print_square(int size)
{
	int a = 0;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
