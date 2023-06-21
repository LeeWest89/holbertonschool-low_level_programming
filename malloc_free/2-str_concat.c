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
	char *a;
	int b = 0, c = 0, d, e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[b] != '\0')
		b++;

	while (s2[c] != '\0')
		c++;

	a = malloc((b + c + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (d = 0; d < b; d++)
		a[d] = s1[d];

	for (e = 0; e < c; e++)
		a[d + e] = s2[e];

	a[d + e] = '\0';

	return (a);
}
