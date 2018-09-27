#include "holberton.h"

/**
 * _atoi - takes a pointer to a string and converts it to
 *         an integer.
 * @s: pointer to string.
 *
 * Return: signed int
 */
int _atoi(char *s)
{
	int p = 1;
	unsigned int ret = 0;

	while ((*s != '\0') && !(*s >= '0' && *s <= '9'))
		if (*s++ == '-')
			p *= -1;
	while ((*s != '\0') && (*s >= '0' && *s <= '9'))
		ret = ret * 10 + (*s++ - '0');

	return (p * ret);
}
