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
	hash_node_t *node = NULL, *head = NULL;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key   = strdup(key);
	node->value = strdup(value);

	head = ht->array[key_index((unsigned char *)key, ht->size)];
	if (head)
	{
		node->next = head;
		head = node;
	}
	else
		head = node;
	return (1);
}
