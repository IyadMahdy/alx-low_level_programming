#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 *
 * @h: pointer to list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	return (i + 1);
}
