#include "main.h"

/**
 * _memset - setting the memory to a constant byte.
 * @s: Pointer to the memory area.
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (int a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
