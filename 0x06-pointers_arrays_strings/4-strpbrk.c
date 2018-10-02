#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 *	      any of the bytes in the string accept.
 * @s: pointer to a string
 * @accept: string containing acceptable bytes
 * Return: pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] && s[i] != accept[j]; j++)
			;
		if (s[i] == accept[j])
			break;
	}
	if (s[i] == '\0')
		return (0);
	else
		return (&s[i]);
}
