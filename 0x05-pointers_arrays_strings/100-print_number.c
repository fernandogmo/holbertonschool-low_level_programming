#include "holberton.h"

/**
 * print_number - prints an integer without using long, arrays,
 *                or pointers. You can only use _putchar to print and
 *                cannot hard-code values.
 * @n: signed integer to printed.
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -1 * n;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
