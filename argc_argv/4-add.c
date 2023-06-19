#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the enter point.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int a, sum = 0;

	if (argc > 1)
	{
		for (a = 0; a < argc; a++)
		{
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}

	else if (argc > 1)
	{
		for (a = 0; a < argc; a++)
		{
			if (atoi(argv[a]) < '0' || (atoi(argv[a]) >= 'a' && atoi(argv[a]) <= 'z'))
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
