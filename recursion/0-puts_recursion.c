#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
	}

	s++;
	_puts_recursion(s);


}
