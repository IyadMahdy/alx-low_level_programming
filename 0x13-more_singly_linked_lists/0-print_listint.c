#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Head of list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
