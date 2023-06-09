#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns a - b
 * @a: the first number
 * @b: the second number
 *
 * Return: subtracts b from a
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: Multiplies a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the divsion of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: divides a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
