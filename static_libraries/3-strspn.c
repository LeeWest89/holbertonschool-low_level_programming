#include "main.h"

/**
 * _strspn - checks string for certain character
 * @s: the string being searched
 * @accept: the character being searched for
 *
 * Return: number of accept character in the string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}

		if (accept[b] == '\0')
		break;
	}

	return (c);
}
