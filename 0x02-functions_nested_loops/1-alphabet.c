#include "holberton.h"


/**
 * print_alphabet - prints lowercase alphabet, then newline
 *
 * Return: Null
 */
void print_alphabet(void)
{
	char *az = "abcdefghijklmnopqrstuvwxyz\n";

	while (*az)
	{
		_putchar(*az);
		az++;
	}
}
