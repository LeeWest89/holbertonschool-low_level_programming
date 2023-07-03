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
	if (separator == NULL)
		return;

	else
		printf("%d/n", ...);
}
