#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the function
 * @argc: the number of arguments
 * @argv: an array of pointer to arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o = argv[2];

	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*o == '/' && b == 0) || (*o == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
