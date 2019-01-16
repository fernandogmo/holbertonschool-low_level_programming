#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the const hash table
 * @key: key of value sought
 * Return: NULL on failure, or else the string value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;

	if (!ht || !key)
		return (NULL);
	head = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
