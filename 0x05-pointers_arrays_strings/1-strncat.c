#include "holberton.h"

/**
 * _strncat - appends the src string to the dest string,
 *            overwriting the terminating null byte (\0) at
 *            the end of dest, and then adds a terminating
 *            null byte (\0).
 * @dest: pointer to string.
 * @src: pointer to string
 * @n: integer number of bytes from src to use
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *temp = dest;

	while (*temp)
		temp++;

	while (src[i] != '\0' && i < n)
	{
		*temp = src[i];
		i++;
		temp++;
	}
	*temp = '\0';

	return (dest);
}
