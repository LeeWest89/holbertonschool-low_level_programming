#include "main.h"

/**
 * print_name - Prints name
 * @name: name to print
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
