#include "holberton.h"


/**
 * print_triangle - draws a (size x size)-triangle in stdout using '#', \n
 * @size: input integer for height and width of triangle
 *
 * Return: Null
 */
void print_triangle(int size)
{
	int h, s;

	for (h = 1; h <= size; h++)
	{
		s = size - h;
		h = size - s;
		for (; s > 0; s--)
			_putchar(' ');
		for (; s < h; s++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
