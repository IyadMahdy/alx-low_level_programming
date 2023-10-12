#include "lists.h"

/**
 * free_dlistint - Frees doubly-linked list
 * @head: Head of list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head)
	{
		ptr = head->next;

		while (ptr)
		{
			free(head);
			head = ptr;
			ptr = ptr->next;
		}
		free(head);
	}
}
