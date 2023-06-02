#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: String to print.
 */
void puts_half(char *str)
{
	int l = 0;
	int n;
	int a;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;
	for (a = n; a < l; a++)
		_putchar(str[a]);

	_putchar('\n');
}
