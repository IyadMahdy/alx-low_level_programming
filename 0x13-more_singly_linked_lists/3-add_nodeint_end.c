#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list.
 * @head: Pointer to head of list
 * @n: Value of new node
 *
 * Return: address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	ptr = *head;
	new->n = n;
	new->next = NULL;
	if (!ptr)
		*head = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
