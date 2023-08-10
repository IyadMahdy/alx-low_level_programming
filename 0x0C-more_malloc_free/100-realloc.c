#include "main.h"

/**
 * _min - Gets Minimum
 * @a: First
 * @b: Second
 *
 * Return: MINIMUM
 */
unsigned int _min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

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
	unsigned int mini, i;
	void *new;

	if (!ptr)
	{
		new = malloc(new_size);
		if (!new)
			return (NULL);
		return (new);
	}
	else if (old_size == new_size)
		return (ptr);
	else if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (!new)
		return (NULL);

	mini = _min(new_size, old_size);
	for (i = 0; i < mini; i++)
		((char *)new)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new);
}
