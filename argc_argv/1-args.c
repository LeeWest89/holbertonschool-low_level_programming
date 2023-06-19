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

	(void) argv;
	for (a = 0; a < argc; a++)
	{
		printf("%d\n", a);
	}

	return (0);
}
