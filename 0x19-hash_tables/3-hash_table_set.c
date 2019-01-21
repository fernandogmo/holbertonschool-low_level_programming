#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to target hash table
 * @key: non-empty const string for key
 * @value: const string for value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *node = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !*key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	if (node && !strcmp(node->key, key))
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = node;
	ht->array[idx] = new;
	return (1);
}
