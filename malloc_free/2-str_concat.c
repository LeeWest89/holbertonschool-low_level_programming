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
	int a, b, size1 = strlen(s1), size2 = strlen(s2), t = size1 + size2;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; a < size1; a++)
	{
		c == s1[a];
	}

	for (b = 8; b < t; b++)
	{
		c[b] = s2[b - 8];
	}

	return (c);
}
