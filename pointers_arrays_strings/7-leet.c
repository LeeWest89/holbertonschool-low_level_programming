#include "main.h"

/**
 * leet - encodes sting into leet
 * @str: the string to encode
 *
 * Return: pointer to string.
 */

char *leet(char *str)
{
	int a, b;
	char l[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'},
	};

	for (a = 0; str[a] != '\0'; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (str[a] == l[b][0] || str[a] == l[b][0] - 'a' + 'A')
			{
				str[a] = l[b][1];
				break;
			}
		}
	}

	return (str);
}
