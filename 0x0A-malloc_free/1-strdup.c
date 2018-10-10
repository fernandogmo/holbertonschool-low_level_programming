#include "holberton.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *	     in memory, which contains a copy of the
 *	     string given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer to dupicate of str, or NULL if str is NULL
 *	   or if malloc fails.
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *p, *s;

	if (!str)
		return ((char *)0);

	p = str;
	while (*p++)
		size++;

	s = (char *)malloc(size + 1);
	if (s)
	{
		p = s;
		while (*str)
			*p++ = *str++;
		*p = '\0';
	}
	return (s);
}
