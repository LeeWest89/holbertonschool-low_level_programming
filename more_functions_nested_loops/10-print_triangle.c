#include "main.h"
/**
 * print_triangle - prints a triangle with #.
 *
 * @size: the size of the triangle to be printed.
 */
void print_triangle(int size)
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
		while (b <= size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
