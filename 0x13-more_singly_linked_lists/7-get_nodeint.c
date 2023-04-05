#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: Head of list
 * @index: Index starting at 0
 *
 * Return: Node of index @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (index--)
	{
		ptr = ptr->next;
		if (ptr = NULL)
			return (NULL);
	}
	return (ptr);
}
