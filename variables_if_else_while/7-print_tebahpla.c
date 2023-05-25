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
	int l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
