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
	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		return (i);
	}
	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	printf("%d\n", ptr->n);
	return (i + 1);
}
