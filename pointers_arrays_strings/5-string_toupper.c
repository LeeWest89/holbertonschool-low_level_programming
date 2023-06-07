#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase letters in a string
 * @str: the string to convert
 *
 * Return: pointer to converted string.
 */

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0 ||str[a - 1] == ' ' || str[a - 1] == '\t' || str[a - 1] =='\n' || str[a - 1] == ',' || str[a - 1] == ';' || str[a - 1] == '.' || str[a - 1] '!' || str[a - 1] == '?' || str [a - 1] == '"' || str [a - 1] '(' || str [a - 1] == ')' || str[a - 1] '{' || str[a - 1] '}')
		{

		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - ('a' - 'A');
		}
		
	}

	return (str);
}
