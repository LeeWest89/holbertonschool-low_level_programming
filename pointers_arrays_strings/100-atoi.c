#include "main.h"
#include <limits.h>

/**
 * _atoi - Makes a string and integer
 * @s: The string to convert
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int a = 1;
	int b = 0;
	int c = 0;

	while (s[c])
	{
		if (s[c] == '-')
			a *= -1;
		if (s[c] >= '0' && s[c] <= '9')
		{
			if (b > INT_MAX / 10 || (b == INT_MAX / 10 && (s[c] - '0') > INT_MAX % 10))
			{
				if (a == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			b = b * 10 + (s[c] - '0');
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
		}
		c++;
	}
	return (b * a);
}
