#include "main.h"

/**
 * _isdigit - CHecks if c is a digit
 *
 * @c: the char being checked
 *
 * Return: 1 if it is a digit, 0 if anything else
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
