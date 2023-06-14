#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return;
	}

	if (s[a] != '\0')
	{
		_putchar("%c", *s[a]);
	}

		a++;
}
