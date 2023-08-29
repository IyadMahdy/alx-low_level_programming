#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: Pointer to Head of function
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
