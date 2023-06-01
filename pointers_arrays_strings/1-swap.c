#include "main.h"

/**
 * swap_int - swaps the vaule of integer a and b.
 *
 * @a: the pointer to be swapped with b.
 *
 * @b: the pointer to be swapped with a.
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
