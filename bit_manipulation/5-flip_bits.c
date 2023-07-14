#include "main.h"

/**
 * flip_bit - returns the number of bits you would need to flip
 * 	to get from one number to another
 * @n: the number
 * @m: the number being flipped to
 *
 * Return: bits to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m, count = 0;

	while (mask > 0)
	{
		count += (mask & 1);
		mask >>= 1;
	}
	return(count);
}
