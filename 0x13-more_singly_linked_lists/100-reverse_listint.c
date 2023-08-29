#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to head of list
 *
 * Return: Pointer to first node of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *q;

	if (!(*head))
		return (NULL);
	if (!((*head)->next))
		return (*head);

	q = *head;
	p = (*head)->next;

	(*head)->next = NULL;
	*head = p;
	p = (*head)->next;

	while (p)
	{
		(*head)->next = q;
		q = *head;
		*head = p;
		p = (*head)->next;
	}
	(*head)->next = q;

	return (*head);
}
