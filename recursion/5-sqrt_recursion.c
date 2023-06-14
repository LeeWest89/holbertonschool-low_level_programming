#include "main.h"

/**
 * _a - square root
 * @n: the number
 * @b: the iterate number
 *
 * Return: square root
 */
int _a(int n, int b)
{
	int _a = b * b

	if (_a > n)
		return (-1);

	if (_a == n)
		return (b);

	return (_a(n, b + 1));

}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 *
 * Return: -1 if n does not have a square root or the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_a(n, 1));

