#include "holberton.h"


/**
 * print_most_numbers - prints numbers from 0 to 9 (!= 2 or 4), \n
 *
 * Return: Null
 */
void print_most_numbers(void)
{
	char *deez_nums = "0123456789\n";

	while (*deez_nums)
	{
		if ((*deez_nums != '2') && (*deez_nums != '4'))
			_putchar(*deez_nums);
		deez_nums++;
	}
}
