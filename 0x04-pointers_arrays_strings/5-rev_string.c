#include "holberton.h"

/**
 * rev_string - takes a pointer to string and reverses the string
 *              it's pointing to.
 * @s: pointer to 1st char of null-terminated string.
 *
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0, j;

	while (s[i])
		i++;

	for (i--, j = 0; i >= j; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
