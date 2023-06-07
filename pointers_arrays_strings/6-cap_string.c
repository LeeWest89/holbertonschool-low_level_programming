#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: the input string
 *
 * Return: pointer to capitalized string.
 */

char *cap_string(char *str)
{
	int a, b;
	char t[] = " \t\n,;.!?\"(){}";

	for (a = 0; str[a] != '\0'; a++)
	{
		int is_t = 0;

			if (a == 0)
				is_t = 1;
			else
		{
			for (b = 0; t[b] != '\0'; b++)
			{
				if (str[a - 1] == t[b])
				{
					is_t = 1;
					break;
				}
			}
		}
			if (is_t && str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 'a' + 'A';
	}

	return (str);
}
