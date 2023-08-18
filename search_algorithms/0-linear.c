#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value being searched for
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
