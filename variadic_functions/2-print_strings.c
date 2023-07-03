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
 * Return: if separator is NULL print nothing, otherwise print
 *	string or nil is string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;

	unsigned int b = 0;
	char *c;

	va_start(a, n);

	while (b < n)
	{
		c = va_arg(a, char *);

		if (separator != NULL && b != (n - 1))
			printf("%s", separator);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		b++;
	}

	va_end(a);

	printf("\n");

}
