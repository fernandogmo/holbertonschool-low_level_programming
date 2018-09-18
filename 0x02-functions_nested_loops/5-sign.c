#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input integer tested
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		_putchar('+');
		s = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		s = -1;
	}
	else
	{
		_putchar('0');
		s = 0;
	}

	return (s);
}
