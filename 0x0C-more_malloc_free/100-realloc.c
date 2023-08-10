#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min, i;
	void *new;

	if (!ptr)
	{
		new = malloc(new_size);
		if (!new)
			return (NULL);
		return (new);
	}
	if (old_size == new_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (!new)
		return (NULL);

	min = min(new_size, old_size);
	for (i = 0; i < min; i++)
		new[i] = ptr[i];
	free(ptr);
	return (new);
}
