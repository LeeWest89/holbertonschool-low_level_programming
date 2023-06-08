#include "main.h"

/**
 * _memcpy - copies memory from src to dest.
 * @dest: Memory area to recieve copy
 * @src: Memory to be copied
 * @n: Number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = *src;

	return (dest);
}
