#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: pinter to the bit
 * @index: he index, starting from 0 of the bit you want to set
 *
 * Return: -1 on an error or 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
