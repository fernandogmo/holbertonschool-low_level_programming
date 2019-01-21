#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next = NULL;
	unsigned long int i = 0;

	if (ht && ht->array == NULL && ht->size)
	{
		for (; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				next = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = next;
			}
		}
		free(ht->array);
		ht->array = NULL;
		ht->size = 0;
		free(ht);
	}
}
