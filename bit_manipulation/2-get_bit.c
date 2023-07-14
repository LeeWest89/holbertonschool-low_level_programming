#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit
 * @index: he index, starting from 0 of the bit you want to get
 *
 * Return: -1 on an error orthe bit vaule of the index
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n &(1 << index)) == 0)
		return (0);

	return (1);
}
