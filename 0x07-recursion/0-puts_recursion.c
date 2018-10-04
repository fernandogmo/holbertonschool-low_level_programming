#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a newline.
 * @s: pointer to a pointer to a char.
 */

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
