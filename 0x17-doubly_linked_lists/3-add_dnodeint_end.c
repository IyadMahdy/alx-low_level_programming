#include "lists.h"

/**
 * add_dnodeint_end - Adds node to end of list
 * @head: Pointer to head of list
 * @n: Value of new node
 *
 * Return: Address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistinit_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*head))
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}
