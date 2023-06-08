#include "main.h"
#include <stddef.h>

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

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

		if (c == '\0')
			return (s);

		return (NULL);
}
