#include "holberton.h"


/**
 * print_diagonal - draws a diagonal line in stdout using n '\\', \n
 * @n: input for integer length of line printed
 *
 * Return: Null
 */
void print_diagonal(int n)
{
	int i, MAXSPACES = n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			i = MAXSPACES - n;
			while (i)
			{
				_putchar(' ');
				i--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
}
