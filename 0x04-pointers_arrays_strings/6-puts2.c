#include "holberton.h"

/**
 * puts2 - takes a pointer to string and prints one char out of 2 from
 *         the string it's pointing to, followed by a newline.
 * @str: pointer to a char
 *
 */
void puts2(char *str)
{
	while (*str)
	{
		if (!(*(str + 1)))
		{
			_putchar(*str);
			break;
		}
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
