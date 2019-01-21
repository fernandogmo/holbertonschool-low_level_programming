#include "hash_tables.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;
	bool printed = false;

	if (ht && ht->array)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				printed = true;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
