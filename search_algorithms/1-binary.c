#include "search_algos.h"

/**
 * binary_search_r - uses recursion to execute a binary search
 *
 * @array: the array being searched
 * @low: start of the array
 * @high: end of array
 * @value: value we are searching for
 *
 * Return: the value
 */

int binary_search_r(int *array, int low, int high, int value)
{
	int i, mid = low + (high - low) / 2;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}

	else if (array[mid] > value)
		return (binary_search_r(array, low, (mid - 1), value));

	else
		return (binary_search_r(array, (mid + 1), high, value));
}

/**
 * binary_search - searches for a value in an array of integers
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value being searched for
 *
 * Return: i if values is found or -1 if NULL or value is not in array
 */

int binary_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);
	return (binary_search_r(array, 0, size - 1, value));
}
