#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: const string hey to be hashed
 * Return: ulong hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381, c = 0;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
