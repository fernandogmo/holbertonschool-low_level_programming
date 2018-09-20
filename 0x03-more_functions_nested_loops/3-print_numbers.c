#include "holberton.h"


/**
 * print_numbers - prints numbers, from 0 to 9, then newline
 *
 * Return: Null
 */
void print_numbers(void)
{
	char *deez_nums = "0123456789\n";

	while (*deez_nums)
	{
		_putchar(*deez_nums);
		deez_nums++;
	}
}
