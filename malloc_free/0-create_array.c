#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create the array
 * @size: size of the array
 * @c: characters in the array
 *
 * Return: NULL if size = 0, returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(sizeof(char) * size);

	if (b == 0)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}

	return(b);
}
