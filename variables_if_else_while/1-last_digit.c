#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Description: Lets use know if last digit is >5, =0, or is <6 and not 0.
 *
 * Return: Always 0 (indicating successful program execution)
 */
int main(void)
{
	int LD;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = (n % 10);
	printf("Last digit of %d is ", n);

	if (LD > 5)
	{
		printf("%d and is greater than 5\n", LD);
	}
	else if (LD == 0)
	{
		printf("%d and is 0\n", LD);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", LD);
	}
	return (0);
}
