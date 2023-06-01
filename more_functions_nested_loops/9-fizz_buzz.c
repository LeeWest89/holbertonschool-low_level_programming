#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 0n success
 */

int main(void)
{
	int n = 1;
	int a = 0;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		a++;

		if (a < 100)
		{
			printf(" ");
		}

		n++;
	}
	printf("\n");
	return (0);
}
