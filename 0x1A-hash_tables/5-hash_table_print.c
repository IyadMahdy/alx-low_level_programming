#include "hash_tables.h"

/**
 * hash_table_print - Prints Hash Table
 * @ht: Hash Table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (!first)
				printf(", ");
			printf("'%s' : '%s'", ptr->key, ptr->value);
			if (first)
				first = 0;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
