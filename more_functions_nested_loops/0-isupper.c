#include "main.h"

/**
 * _isupper - Checks for capital letters
 * @c: the letter being checked 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
