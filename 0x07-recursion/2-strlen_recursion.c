#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a char.
 * Return: integer length of string.
 */

int _strlen_recursion(char *s)
{
	return (!*s ? 0 : 1 + _strlen_recursion(++s));
}
