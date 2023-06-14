#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string
 */

void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		_putchar(*s);
}
