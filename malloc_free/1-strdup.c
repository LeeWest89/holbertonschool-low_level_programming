#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates the string
 * @str: the string
 *
 * Return: NULL if string is NULL, on success returns pointer to duplicate string.
 */

char *_strdup(char *str)
{
	int a = 1, b = 0;
	char *c;

	if (str = '\0')
		return (NULL);

	for (; str[a]; a++)

	c = malloc((sizeof(char) * a) + 1);

	if (c = '\0')
		return (NULL);

	for (; b < a; b++)
	{
		c[b] = str[b];
	}

	c[b] = '\0';
	return (c);





}
