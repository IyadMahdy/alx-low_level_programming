#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: Pointer to head of list
 * @idx: Index for the new node to be added
 * @n: Data of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *node;
	size_t len = 0;

	ptr = *head;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL || idx > len)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	ptr = *head;
	if (idx == 0)
	{
		node->next = (*head);
		*head = node;
	}
	else if (idx == len)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
		node->next = NULL;
	}
	else
	{
		while (idx > 1)
		{
			ptr = ptr->next;
			idx--;
		}
		node->next = ptr->next;
		ptr->next = node;
	}
	return (node);

}
