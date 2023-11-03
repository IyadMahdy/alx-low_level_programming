#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash Table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;

	if (!ht || !ht->size)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ht->array[i])
		{
			ptr = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = ptr;
		}
	}

	free(ht->array);
	free(ht);
}
