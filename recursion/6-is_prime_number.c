#include "main.h"

/**
 * is_prime_number - tell you if number is prime.
 * @n: the number
 *
 * Return: 1 if prime or 0 otherwise
 */

int is_prime_number(int n)

{
	if ((n % 2 == 0) || (n % 3 == 0))
		return (0);

	else
		return (1);
}
