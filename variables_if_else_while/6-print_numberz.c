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
	int n = 0;

	while (n <= '9')
	{
		putchar(n + '0');
		n++;
	}

	return (0);
}
