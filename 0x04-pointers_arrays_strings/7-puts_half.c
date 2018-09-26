#include "holberton.h"

/**
 * puts_half - takes a pointer to string and prints one char out of 2 from
 *         the string it's pointing to, followed by a newline.
 * @str: pointer to 1st char of a null-terminated string
 *
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	for (j = i / 2; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
