#include "holberton.h"


/**
 * print_square - draws a diagonal line in stdout using n '\\', \n
 * @size: input for integer length of line printed
 *
 * Return: Null
 */
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		h = size;
		while (h)
		{
			w = size;
			while (w)
			{
				_putchar('#');
				w--;
			}
			_putchar('\n');
			h--;
		}
	}
}
