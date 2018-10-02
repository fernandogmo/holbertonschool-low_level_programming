#include "holberton.h"

/**
 * _strspn - returns the # of bytes in the initial segment of s
 *	     consisting entirely of bytes in accept.
 * @s: pointer to a string
 * @accept: string containing acceptable bytes
 * Return: integer length of acceptable substring >= 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len;

	for (len = 0; *s; s++, len++)
	{
		for (i = 0; accept[i] && *s != accept[i]; i++)
			;
		if (!accept[i])
			break;
	}

	return (len);
}
