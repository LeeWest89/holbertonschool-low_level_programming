#include "main.h"

/**
 * _puts - Prints a string.
 * @str: String to print
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}

	_putchar('\n');
}
