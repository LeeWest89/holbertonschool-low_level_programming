#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - Returns sum of all parameters
 * @n: number of parameters
 * @...: the parameters
 *
 * Return: 0 if n == 0, otherwise the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;

	va_start(a, n);

	int b = a, int c  = va_arg(a, int);

	while (c != 0)
	{
		b += c;
		c + va_arg(a, int);
	}
	va_end(a);
	return (b);
}
