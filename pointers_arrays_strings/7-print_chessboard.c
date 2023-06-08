#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array
 */

void print_chessboard(char (*a)[8])
{
	int w, b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[w][b]);
		}

		_putchar('\n');
	}
}
