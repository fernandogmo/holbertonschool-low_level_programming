#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next = NULL, *prev = NULL;
	unsigned long int i = 0;

	if (ht && ht->array == NULL && ht->size)
	{
		for (; i < ht->size; i++)
		{
			next = ht->array[i];
			while (next)
			{
				prev = next;
				next = next->next;
				free(prev->key);
				free(prev->value);
				free(prev);
			}
		}
		free(ht->array);
		free(ht);
	}
}
