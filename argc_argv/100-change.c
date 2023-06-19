#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the enter point.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	int c[] = {25, 10, 5, 2, 1};
	int b = sizeof(c) / sizeof(c[0]);
	int d = 0;

	for (int e = 0; e < b; e++)
	{
		d += a / c[e];
		a %= c[e];
	}

	printf("%d\n", d);

	return (0);
}
