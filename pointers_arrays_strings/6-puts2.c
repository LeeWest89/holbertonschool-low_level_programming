#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: String to print
 */

void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);

		if (str[s + 1] == '\0')
			break;

		s += 2;
	}

	_putchar('\n');
}
