#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to a string
 * @c: character to find
 * Return: pointer to the first instance of char c in string s.
 *	   or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] == c)
			break;

	return (*s ? (s + i) :0);
}
