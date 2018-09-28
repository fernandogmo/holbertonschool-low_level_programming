#include "holberton.h"

/**
 * _strcat - appends the src string to the dest string,
 *           overwriting the terminating null byte (\0) at
 *           the end of dest, and then adds a terminating
 *           null byte (\0).
 * @dest: pointer to string.
 * @src: pointer to string
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *temp = dest;

	while (*temp)
		temp++;

	while (src[i] != '\0')
	{
		*temp = src[i];
		i++;
		temp++;
	}
	return (dest);
}
