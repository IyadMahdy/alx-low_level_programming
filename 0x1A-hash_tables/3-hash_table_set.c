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

	if (!ht || !key || !key[0] || !(ht->size) || !ht->array)
		return (0);

	size = ht->size;
	new_element = calloc(1, sizeof(hash_node_t));
	if (!new_element)
		return (0);
	new_element->key = strdup(key);
	if (!(new_element->key))
	{
		free(new_element);
		return (0);
	}
	new_element->value = strdup(value);
	if (!(new_element->value))
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}

	index = key_index((unsigned char *)key, size);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(new_element->value);
		free(new_element->key);
		free(new_element->value);
		free(new_element);
	}
	else
	{
		if (!ht->array[index])
			ht->array[index] = new_element;
		else
		{
			new_element->next = ht->array[index];
			ht->array[index] = new_element;
		}
	}
	return (1);
}
