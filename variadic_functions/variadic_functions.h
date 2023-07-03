#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct print_a - new type to define a printer
 * @symbol: the data type
 * @print: function pointer to function to print data type
 */

typedef struct print_a
{
	char *symbol;
	void (*print)(va_list arg);

} print_a;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
