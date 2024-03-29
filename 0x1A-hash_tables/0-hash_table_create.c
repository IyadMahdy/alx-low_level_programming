#include "hash_tables.h"

/**
 * hash_table_create - Creates the hash table
 * @size: Size of array
 *
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_table_t *));
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
