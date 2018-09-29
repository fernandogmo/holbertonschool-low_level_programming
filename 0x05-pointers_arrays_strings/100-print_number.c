#include "holberton.h"

/**
 * print_number - prints an integer without using long, arrays,
 *                or pointers. You can only use _putchar to print and
 *                cannot hard-code values.
 * @n: signed integer to printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
