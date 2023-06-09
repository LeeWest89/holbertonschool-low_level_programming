#include "main.h"
#include <stddef.h>

/**
 * _strstr - checks string for certain substring
 * @haystack: the string being searched
 * @needle: the substring being searched for
 *
 * Return: substring if present or NULL if not present
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}

		if (needle[b] == '\0')
			return (haystack + a);
	}

	return (NULL);
}
