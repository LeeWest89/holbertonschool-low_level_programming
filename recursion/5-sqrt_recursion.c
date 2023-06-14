#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 *
 * Return: -1 if n does not have a square root or the square root of n
 */

int _sqrt_recursion(int n)
{
	int a, i;

	{
		int a = i * i;

		if (a > n)
			return (-1);

		if (a == n)
			return (i);

		return (a(n, i + 1));
	}

	return (a(n, 1));
}

