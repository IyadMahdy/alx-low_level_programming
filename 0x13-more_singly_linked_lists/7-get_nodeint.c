#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node
 * of a listint_t linked list.
 * @head: Head to list
 * @index: Index of the node starting at 0
 *
 * Return:  nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head,
		unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	if (!head)
		return (NULL);
	else
		return (head);
}
