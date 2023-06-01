#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 */

void more_numbers(void)
{
	int a = 0;
	int n;

	while (a < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
