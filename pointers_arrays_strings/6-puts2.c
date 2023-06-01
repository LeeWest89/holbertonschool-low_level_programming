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
		s++;

		while (str[s])
		{
			_putchar(str[s]);
			s += 2;
		}
	}

	_putchar('\n');
}
