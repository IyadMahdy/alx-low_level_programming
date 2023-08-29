#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to head of list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: Value of new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *ptr = *head;

	if (!ptr && idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!idx)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
			if (!ptr)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = ptr->next;
		ptr->next = new;
	}
	return (new);
}
