#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - contenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Return NULL on empty str and on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int b = 0, c = 0, d;
	int size1 = strlen(s1), size2 = strlen(s2);
	char *e;

	if (s1 == NULL)
	{
		s1 = "";
		size1 = 0;
	}

	if (s2 == NULL)
	{
		s2 = "";
		size2 = 0;
	}

	d = size1 + size2;
	e = malloc((1 + d) * sizeof(char));

	if (e == NULL)
		return (NULL);

	while (c < d)
	{
		if (c <= size1)
		{
			e[c] = s1[c];
		}

		if (c >= size1)
		{
			e[c] = s2[b];
			b++;
		}
		c++;
	}
	e[c] = '\0';
	return (e);
}
