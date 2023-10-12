#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index in list
 * @head: Pointer to head of list
 * @index: Index
 *
 * Return: 1 if succeeded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;

	if (!(*head) || !head)
		return (-1);

	ptr = *head;
	if (!index)
	{
		ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (index--)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	if (ptr->next)
		ptr->next->prev = ptr->prev;
	ptr->prev->next = ptr->next;
	free(ptr);
	return (1);
}
