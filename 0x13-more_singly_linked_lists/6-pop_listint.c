#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list,
 * @head: Pointer to Head of list
 *
 * Return: Head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	ptr = (*head)->next;
	n = (*head)->n;

	free(*head);
	*head = ptr;
	return (n);
}
