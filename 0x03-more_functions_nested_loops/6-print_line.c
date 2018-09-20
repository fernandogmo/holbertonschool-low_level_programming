#include "holberton.h"


/**
 * print_line - draws a straight line in stdout using n '_', \n
 * @n: input for integer length of line printed
 *
 * Return: Null
 */
void print_line(int n)
{
	while (n)
	{
		if (n > 0)
			_putchar('_');
		else
			break;
		n--;
	}
	_putchar('\n');
}
