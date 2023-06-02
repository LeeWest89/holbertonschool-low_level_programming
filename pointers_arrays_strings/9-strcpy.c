#include "main.h"

/**
 * _strcpy - Copies the string from src to the buffer dest.
 * @dest: Strings destination
 * @src: Source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
