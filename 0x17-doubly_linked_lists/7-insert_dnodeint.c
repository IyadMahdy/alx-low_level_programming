#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at given Index
 * @h: Pointer to Head of list
 * @idx: Index
 * @n: Value inside of node
 *
 * Return: Address of new node of NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!idx)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		ptr = *h;
		while (idx--)
		{
			ptr = ptr->next;
			if (!ptr)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = ptr;
		new->prev = ptr->prev;
		ptr->prev->next = new;
		ptr->prev = new;
	}

	return (new);
}
