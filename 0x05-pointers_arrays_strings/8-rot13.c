#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @a: pointer to a string
 * Return: pointer to modified string
 */
char *rot13(char *a)
{
	int i, j;
	const char inputs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	const char outputs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i]; i++)
		for (j = 0; j < 52; j++)
			if (a[i] == inputs[j])
			{
				a[i] = outputs[j];
				break;
			}

	return (a);
}
