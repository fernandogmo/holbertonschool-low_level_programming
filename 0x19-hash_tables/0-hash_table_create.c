#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - creates a hash table
 * @size: uint size of array
 * Return: NULL on failure, or else pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	ht->size  = size;
	ht->array = calloc((size_t)size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
