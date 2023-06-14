#include "main.h"

/**
 * _strlen_recursion - prints the length of the string
 * @s: the string
 *
 * Return: 0 if string is '\0' or length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (s + 1);


}
