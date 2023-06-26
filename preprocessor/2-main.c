#include <stdio.h>

/*
 * main - point of entry for the program
 * prints the name of the file it was compiled from, and a new line.
 *
 * Returns: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
