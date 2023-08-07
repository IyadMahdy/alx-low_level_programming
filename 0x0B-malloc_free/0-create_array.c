#include "main.h"

/**
 * create_array - create an array of and initialize it with a specific value
 * @size: the desired size of the array
 * @c: the value with which the array should be initialized
 *
 * Return: NULL if size is 0 or memory allocation fails,
 * otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (!size)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
