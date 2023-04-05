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
	listint_t *ptr = *head;
	int data = ptr->n;

	*head = ptr->next;
	free(ptr);

	return (data);
}
