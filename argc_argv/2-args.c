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
	int a;

	for (a = 1; a < 0; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
