#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if array or cmp are NULL or if size <= 0,
 *		index of the first element in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);
}
