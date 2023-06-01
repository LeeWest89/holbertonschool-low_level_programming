#include "main.h"

/**
 * _isupper - Checks for capital letters
 * @c: the letter being checked
 * Return: 1 on captial C, 0 on anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
