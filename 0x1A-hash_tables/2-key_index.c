#include "hash_tables.h"

/**
 * key_index - Gives Index of Key
 * @key: Key
 * @size: Size of array of the hash table
 *
 * Return: Index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
