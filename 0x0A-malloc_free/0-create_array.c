#include "holberton.h"

/**
 * create_array - creates an array of chars, and inititalizes
 *		  it to a specific char.
 * @size: the byte size of the return array
 * @c: the char value to fill the return array
 *
 * Return: pointer to array of char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size < 1)
		return ((char *)0);

	a = malloc(size);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
