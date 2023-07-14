#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string of binary
 *
 * Return: the unsigned int that represents the sting
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, ptwo = 1, length = strlen(b);
	int a;

	for (a = length - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (NULL);

		if (b[a] == '1')
			result += ptwo;

		ptwo *= 2;
	}
	return (result);
}
