#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of list
 * @head: Head of list
 * @index: Index of node to get
 *
 * Return: Nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index--)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
