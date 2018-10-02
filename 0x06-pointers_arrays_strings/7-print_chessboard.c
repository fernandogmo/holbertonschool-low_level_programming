#include "holberton.h"

/**
 * print_chessboard - prints a chessboard specified by 2d array.
 * @a: pointer to an 8x8 array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
