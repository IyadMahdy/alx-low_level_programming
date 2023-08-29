#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * (index) of a listint_t linked list.
 * @head: Pointer to head of list
 * @index: index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head, *ptr2;

	if (!ptr)
		return (-1);
	if (!index)
	{
		*head = ptr->next;
		free(ptr);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			ptr = ptr->next;
			if (!ptr)
				return (-1);
		}
		ptr2 = ptr->next;
		if (!ptr2)
			return (-1);
		ptr->next = ptr2->next;
		free(ptr2);
	}
	return (1);
}
