#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: pointer to memory
 * @b: byte constant used to fill memory
 * @n: positive integer number of bytes to fill
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}