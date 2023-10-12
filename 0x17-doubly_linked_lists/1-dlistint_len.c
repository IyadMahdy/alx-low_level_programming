#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked list
 * @h: Head of list
 *
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
