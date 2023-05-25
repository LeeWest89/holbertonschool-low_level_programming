#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using putchar to lower and upercase alphabet
 *
 * Return: Always 0 (indicating a successful program execution)
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');

	return (0);
}
