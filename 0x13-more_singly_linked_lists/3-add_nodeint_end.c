#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of the list
 *
 * @head: Pointer to previous last node
 * @n: Value of new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (ptr == NULL)
	{
		*head = node;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (node);
}
