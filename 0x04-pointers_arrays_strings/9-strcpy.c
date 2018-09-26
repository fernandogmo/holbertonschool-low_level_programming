#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to string.
 * @src: pointer to string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
