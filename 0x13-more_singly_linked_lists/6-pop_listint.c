#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: Pointer to head node
 * Return: Deleted Node Data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (data);
}
