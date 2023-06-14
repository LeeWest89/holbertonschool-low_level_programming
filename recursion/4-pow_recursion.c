#include "main.h"

/**
 * _pow_recursion - multiples x to the recursion of y
 * @x: the number
 * @y: the number of factorial to x
 *
 * Return: -1 is y is < 0, returns the factorial of x by power y.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}


	return (x * _pow_recursion(x, y - 1));


}
