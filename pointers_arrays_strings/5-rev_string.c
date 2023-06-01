#include "main.h"

/**
 * rev_string - Reverses the string.
 * @s: String to be reverse.
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d;

	while (s[a] != '\0')
		a++;

	c = a - 1;

	while (b < c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;

		b++;
		c--;
	}
}
