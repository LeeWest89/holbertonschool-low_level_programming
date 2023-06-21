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
	int len = strlen((str) + 1);
	char *c = malloc(len * (sizeof(char) * a));

	if (c == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (; str[a]; a++)

		for (; b < a; b++)

			return (c);





}
