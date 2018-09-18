#include "holberton.h"


/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times, then newline
 *
 * Return: Null
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i)
	{
		char *az = "abcdefghijklmnopqrstuvwxyz\n";

		while (*az)
		{
			_putchar(*az);
			az++;
		}
		i--;
	}
}
