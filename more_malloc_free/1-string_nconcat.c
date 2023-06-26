#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - contenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes of s2 to be concat.
 *
 * Return: Return NULL on empty str and on failure. On success s1 +  s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int b = 0, d;
	unsigned int e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[b] != '\0')
		b++;

	a = malloc((b + n + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (d = 0; d < b; d++)
		a[d] = s1[d];

	for (e = 0; e < n; e++)
		a[d + e] = s2[e];

	a[d + e] = '\0';

	return (a);
}
