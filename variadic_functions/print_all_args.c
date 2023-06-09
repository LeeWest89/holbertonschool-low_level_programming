#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a character
 * @arg: the argument to print
 */

void print_char(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	printf("%c", a);
}

/**
 * print_int - prints a integer
 * @arg: the argument to print
 */

void print_int(va_list arg)
{
	int b;

	b = va_arg(arg, int);
	printf("%d", b);
}

/**
 * print_float - prints a float
 * @arg: the argument to print
 */

void print_float(va_list arg)
{
	float e;

	e = va_arg(arg, double);
	printf("%f", e);
}

/**
 * print_string - prints a string
 * @arg: the argument to print
 */

void print_string(va_list arg)
{
	char *d;

	d = va_arg(arg, char *);

	if (d == NULL)
		printf("(nil)");
	else
		printf("%s", d);
}
