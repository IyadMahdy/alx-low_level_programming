#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginning of list
 * @head: Pointer to head of list
 * @n: Value to be stored inside new node
 *
 * Return: Address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
