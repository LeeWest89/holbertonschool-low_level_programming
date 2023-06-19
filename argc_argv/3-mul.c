#include "main.h"
#include <stdio.h>

/**
 * main - the enter point.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int a = argv[1], b = argv[2];

	if (argc == 3)
	{
		printf("%d\n", a * b);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
