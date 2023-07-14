#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string of binary
 *
 * Return: the unsigned int that represents the sting
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, ptwo = 1, length;
	int a;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (a = length - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		if (b[a] == '1')
			result += ptwo;

		ptwo *= 2;
	}
	return (result);
}
