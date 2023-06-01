#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: String to print
 */

void puts2(char *str)
{
	int s = 0;
	int a = 1;

	while (str[s] != '\0')
	{
		a = !a
		s++;
	}
		s = 0;
	while (str[s] != '\0')
	{
		if (a)
		_putchar(str[s]);
		s++;
	}

	_putchar('\n');
}
