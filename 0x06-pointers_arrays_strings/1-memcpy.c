#include "holberton.h"

/**
 * _memcpy - copies the first n bytes of the memory area
 *           pointed to by src into the memory area
 *	     pointed to by dest.
 * @dest: pointer to destination memory area
 * @src:  pointer to source memory area
 * @n: positive integer number of bytes to copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
