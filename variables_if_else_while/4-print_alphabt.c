#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using putchar to print every letter except 'e' and 'q'.
 *
 * Return: Always 0 (indicating successful program execution)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
