#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Returns sum of all parameters
 * @separator: string to print between Numbers
 * @n: number of parameters
 * @...: the parameters
 *
 * Return: if separator is NULL print nothing, otherwise print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;

	unsigned int b = 0;

	va_start(a, n);

	while (b < n)
	{
		printf("%d", va_arg(a, int));

		if (separator != NULL)
			printf("%s", separator);

		b++;
	}

	printf("\n");

	va_end(a);
}
