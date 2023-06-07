#include "main.h"
/**
 * _strcat - cats two strings
 * @dest: the destination string.
 * @src: the source string
 *
 * Return: pointer to the resulting string 'dest'.
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a)
		a++;

	while (*src)
	{
		*a = *src;
		a++;
		src++;
	}

	*a = '\0';

	return (dest);
}
