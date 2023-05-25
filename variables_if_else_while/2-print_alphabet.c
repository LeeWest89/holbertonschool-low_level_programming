#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using putchar to print the alphabet.
 *
 * Return: Always 0 (indicating successful program execution)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
