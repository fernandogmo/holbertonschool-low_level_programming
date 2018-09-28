#include "holberton.h"

/**
 * _strncpy - copies at most n bytes of the string pointed
 *            to by src, including the terminating null
 *            byte ('\0'), to the buffer pointed to by dest.
 * @dest: pointer to string.
 * @src: pointer to string
 * @n: integer number of bytes from src to use
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
