#include "main.h"

/**
 * print_most_numbers - prints most numbers
 */

void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	int n = 0;

	while (n < 9)
	{
		_putchar(numbers[n]);
		n++;
	}
}
