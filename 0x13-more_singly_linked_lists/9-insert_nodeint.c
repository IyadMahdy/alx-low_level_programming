#include "lists.h"

unsigned int list_length(listint_t *head);

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

	node = malloc(sizeof(listint_t));
	if (node == NULL || idx > list_length(*head))
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

/**
 * list_length - Length of list
 *
 * @head: Head of list
 * Return: Length of list
 */
unsigned int list_length(listint_t *head)
{
	listint_t *ptr = head;
	unsigned int len = 0;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
