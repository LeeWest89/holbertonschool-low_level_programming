#include "variadic_functions.h"
#include "print_all_args.c"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a string with different typs of arguments
 * @...: Number of arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int g = 0, h = 0;
	char *sep;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[g] != '\0')
	{
		h = 0;

		while (h < 4 && format[g] != fs[h].symbol)
			h++;
		
		if (h < 4)
		{
			printf("%s", sep);
			fs[h].print(args);
			sep = ", ";
		}

		g++;
	}

	printf("\n");

	va_end(args);
}
