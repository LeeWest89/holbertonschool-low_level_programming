#include "main.h"

/**
 * _isalpha - checksfor lowercase and uppercase characters
 *
 * @c: the character being checked
 *
 * Return: 1 for lowercase or uppercase character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
