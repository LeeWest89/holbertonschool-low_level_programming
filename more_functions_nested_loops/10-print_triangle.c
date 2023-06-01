#include "main.h"
/**
 * print_triangle - prints a triangle with #.
 *
 * @size: the size of the triangle to be printed.
 */
void print_triangle(int size)
{
	int a = size - 1;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (a >= 0)
	{
		b = 0;
		while (b < size)
		{
			if (b >= a)
				_putchar('#');
			else
				_putchar(' ');
			b++;
		}
		_putchar('\n');
		a--;
	}
}
