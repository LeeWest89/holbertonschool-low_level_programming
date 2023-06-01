#include "main.h"

/**
 * print_numbers - prints numbers
 */

void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int n = 0;

	while (n < 10)
	{
		_putchar(numbers[n]);
		n++;
	}
}
