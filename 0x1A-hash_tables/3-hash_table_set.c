#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash Table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if succeeded, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int size, index;
	char *key2, *value2;

	if (!ht || !key || !key[0] || !(ht->size) || !ht->array)
		return (0);

	size = ht->size;
	key2 = strdup(key);
	if (!key2)
		return (0);
	value2 = strdup(value);
	if (!value2)
		return (free(key2), 0);

	new_element = calloc(1, sizeof(hash_node_t));
	if (!new_element)
		return (free(key2), free(value2), 0);

	new_element->key = key2;
	new_element->value = value2;

	index = key_index((unsigned char *)key, size);

	if (!ht->array[index])
		ht->array[index] = new_element;
	else if (strcmp(ht->array[index]->key, key))
	{
		new_element->next = ht->array[index];
		ht->array[index] = new_element;
	}
	else
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value2;
		free(key2);
		free(new_element);
	}

	return (1);
}
