#include "main.h"

/**
 * _abs - the absolute value of an integer
 *
 * @n: The intger
 *
 * Return: The absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
