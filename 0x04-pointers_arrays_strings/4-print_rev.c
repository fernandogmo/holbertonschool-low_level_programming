#include "holberton.h"

/**
 * print_rev - takes a pointer to string and prints the string
 *              it's pointing to, in reverse, followed by a newline.
 * @s: pointer to a char
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i];)
		i++;

	for (; i; i--)
		_putchar(s[i - 1]);

	_putchar('\n');
}
