#include "main.h"

/**
 * factorial - multiple the given number factorially to !0.
 * @n: the number
 *
 * Return: -1 is n is < 0, 1 if n is 0 or 1, returns the factorial of n.
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if ((n == 0) || (n == 1))
	{
		return (1);
	}

	return (n * factorial(n - 1));


}
