#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash Table
 * @key: Key
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr && strcmp(key, ptr->key))
		ptr = ptr->next;

	if (!ptr)
		return (NULL);
	return (ptr->value);
}
