#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: size of the array
 * @action: function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			(action(array[a]);
	}
}
