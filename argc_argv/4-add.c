#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the enter point.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 on success or 1 on an Error
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc, a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
				printf("Error\n");
				return (1);
		}

		sum += atoi(argv[a]);
	}

	return (0);
}
