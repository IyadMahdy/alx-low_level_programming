#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to head of list
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *loop, *ptr;
	unsigned int i = 0;

	if (!(*h))
		return (0);

	loop = loop_finder(*h);
	ptr = *h;
	while (ptr != loop)
	{
		ptr = ptr->next;
		if (!ptr)
			break;
		free(*h);
		i++;
		*h = ptr;
	}
	free(*h);
	*h = NULL;
	return (++i);
}
