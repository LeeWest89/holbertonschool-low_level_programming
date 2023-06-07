#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase letters in a string
 * @str: the string to convert
 *
 * Return: pointer to converted string.
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - ('a' - 'A');
		}
		a++
	}

	return (str);
}
