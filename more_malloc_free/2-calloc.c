#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates the memory of an array
 * @nmemb: the elements of the array
 * @size: the size of the array
 *
 * Return: the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == 0)
		return (NULL);

	return (a);
}
