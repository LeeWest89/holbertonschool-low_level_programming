#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Returns sum of all parameters
 * @separator: string to print between strings
 * @n: number of strings
 * @...: the strings
 *
 * Return: if separator is NULL print nothing, otherwise print string or nil is string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;

	unsigned int b = 0;

	va_start(a, n);

	while (b < n)
	{
		printf("%d", va_arg(a, int));

		if (separator != NULL && b != (n - 1))
			printf("%s", separator);

		if (separator == NULL)
			printf("(nil)");

		b++;
	}

	printf("\n");

	va_end(a);
}
