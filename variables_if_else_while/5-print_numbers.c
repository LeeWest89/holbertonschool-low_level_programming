#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: using a while loop to count 0-9.
 *
 * Return: Always 0 (indicating successful program execution)
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
