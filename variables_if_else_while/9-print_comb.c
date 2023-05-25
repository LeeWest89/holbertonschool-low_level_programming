#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: using a while loop to display single-digit numbers combos
 *
 * Return: Always 0 (indicating successful program execution)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n = '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

	return (0);
}
