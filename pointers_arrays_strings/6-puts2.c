#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: String to print
 */

void puts2(char *str)
{
	int s = 0;
	int a = -1;

	while (str[s] != '\0')
	{
		s++;
		if (a == -1)
		a = s;

		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a += 2;
		}
	}

	_putchar('\n');
}
