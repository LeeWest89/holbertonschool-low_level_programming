#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string being searched
 * @c: the character being searched for
 *
 * Return: pointer th for occurrence of c, or NULL if characteris not found.
 */

char *_strchr(char *s, char c)
{
	int a;
	int NULL = '\0';

	for (a = 0; a < *s; a++)
	{
		if (s[a] == c)
			return (s);
		else if (s[a] == '\0')
			return (NULL);
	}
}
