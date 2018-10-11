#include "holberton.h"
#include "stdlib.h"

/**
 * get_len - returns lenght of input string
 * @s: pointer to string
 * Return: integer length of s
 */
int get_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}


/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer number of arguments
 * @av: pointer to array of strings
 *
 * Return: pointer to concatenated argument, separated by \n,
 *	   or NULL if either input is NULL or if malloc fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *ret, *ret0;

	if (ac < 1)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += 1 + get_len(av[i]);

	ret = malloc(sizeof(char) * (len + 1));
	ret0 = ret;
	if (ret)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				*ret++ = av[i][j];
			*ret++ = '\n';
		}
		*ret = '\0';
	}
	return (ret0);
}
