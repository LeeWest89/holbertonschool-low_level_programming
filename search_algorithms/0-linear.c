#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value being searched for
 *
 * Return: i if values is found or -1 if NULL or value is not in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
