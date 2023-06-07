#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination
 * @src: String
 * @n: number of bytes to copy
 *
 * Return: Pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n)
	{
		dest[a] = src[a];

		if (src[a] == '\0')
			break;

		a++;
	}

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
