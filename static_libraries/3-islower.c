#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: the charcter being chected
 *
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
