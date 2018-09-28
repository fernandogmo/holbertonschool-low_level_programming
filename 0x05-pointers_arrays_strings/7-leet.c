#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @a: pointer to a string
 * Return: pointer to modified string
 */
char *leet(char *a)
{
	int i, j;
	const char *codes[5] = {"aA4", "eE3", "oO0", "tT7", "lL1"};

	for (i = 0; a[i]; i++)
		for (j = 0; j < 5; j++)
			if (a[i] == codes[j][0] || a[i] == codes[j][1])
				a[i] = codes[j][2];

	return (a);
}
