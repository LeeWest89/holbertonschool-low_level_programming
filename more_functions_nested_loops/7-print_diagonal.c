#include "main.h"
/**
 * print_diagonal - prints a line of diagonals
 *
 * @n: the number of diagonals to be printed.
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (a < n)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
