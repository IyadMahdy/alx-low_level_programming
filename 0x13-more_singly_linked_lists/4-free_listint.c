#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: Head of function
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while(head)
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}
}
