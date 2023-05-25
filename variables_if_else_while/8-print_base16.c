#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: using a while loop to display z-a.
 *
 * Return: Always 0 (indicating successful program execution)
 */

int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
