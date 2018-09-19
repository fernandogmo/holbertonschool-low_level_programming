#include "holberton.h"


/**
 * print_last_digit - prints and returns the last digit of an input int
 *
 * @n: input integer
 *
 * Return: Positive single digit int
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r *= -1;
	_putchar(r + '0');

	return (r);
}
