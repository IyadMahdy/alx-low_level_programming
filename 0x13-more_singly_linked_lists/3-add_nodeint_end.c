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

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	*head = node;
	return (node);
}
