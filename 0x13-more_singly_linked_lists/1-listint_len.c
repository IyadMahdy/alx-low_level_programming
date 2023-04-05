#include "lists.h"

/**
 * listint_len - Returns number of elements in the list
 *
 * @h: Pointer to list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h);
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
