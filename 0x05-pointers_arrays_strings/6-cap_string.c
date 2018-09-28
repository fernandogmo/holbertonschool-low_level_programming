#include "holberton.h"

/**
 * cap_string - capitalizes all words in a string.
 * @a: pointer to a string
 * Return: pointer to modified string
 */
char *cap_string(char *a)
{
	char *ptr, *seps = " \t\n,;.!?\"(){}";
	int new_word = 1, i;

	for (ptr = a; *ptr; ptr++)
	{
		if (new_word)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr -= 32;
			new_word = 0;
		}
		for (i = 0; seps[i]; i++)
			if (*ptr == seps[i])
				new_word = 1;
	}

	return (a);
}
