#include "main.h"
/**
 * print_line - prints a line of underscores
 *
 * @n: the number of underscores to be printed.
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (a < n)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');
}
