#include "main.h"

/**
 * _strpbrk - checks string for certain character
 * @s: the string being searched
 * @accept: the character being searched for
 *
 * Return: pointer to the byte in s that matches accept, or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	unsigned char c[];

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c[] = s[a];
				break;
			}
			if (s[a] != accept[b])
				break;
		}
	}

	return (c);
}
