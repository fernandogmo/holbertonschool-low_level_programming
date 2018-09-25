#include "holberton.h"

/**
 * _strlen - takes a pointer to string and returns the length the string.
 * @s: pointer to a char
 *
 * Return: int length of input string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s; s++)
		len++;

	return (len);
}
