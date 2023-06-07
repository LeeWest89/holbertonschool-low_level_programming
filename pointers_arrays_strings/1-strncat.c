#include "main.h"
/**
 * _strncat - cats two strings
 * @dest: the destination string.
 * @src: the source string
 * @n: max bytes from src to cat
 *
 * Return: pointer to the resulting string 'dest'.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*a)
		a++;

	while (*src && n > 0)
	{
		*a = *src;
		a++;
		src++;
		n--;
	}

	*a = '\0';

	return (dest);
}
