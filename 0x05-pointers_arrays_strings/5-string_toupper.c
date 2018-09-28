#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters in a
 *                  string to uppercase.
 * @a: pointer to an int array
 *
 * Return: string
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
