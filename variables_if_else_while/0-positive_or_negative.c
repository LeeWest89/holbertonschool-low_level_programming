#include <stdlib.h>
#include <time.h>
#include <studio.h>

/**
 * main - Entry point
 *
 * Description: Prints if n is postive, negative, or zero.
 *
 * Return: Always 0 (indicating a succesful program execution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ) {
		printf("n is positive\n");
	}
	else if( n = 0 ) {
		printf("n is zero\n");
	}
	else( n < 0 ) {
		printf("n is negative\n");
	}
	return (0);
}

