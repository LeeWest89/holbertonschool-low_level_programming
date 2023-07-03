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

	int b = 0, int c = 0;

	va_start(a, n);

	while (c < n)
	{
		b += va_arg(a, int);
		c++;
	}

	va_end(a);

	return (b);
}
