#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates the memory of an array
 * @nmemb: the elements of the array
 * @size: the size of the array
 *
 * Return: the pointer or NULL for 0 of failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int c;
	char *b;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == 0)
		return (NULL);

	b = a;

	for (c = 0; c < (size * nmemb); c++)
		b[c] = '\0';

	return (a);
}
