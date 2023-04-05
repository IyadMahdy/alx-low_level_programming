#include "lists.h"

/**
 * add_nodeint - Adds node to the beginning of list
 *
 * @head: pointer to new node
 * @n: Value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->next = *head;
	node->n = n;

	*head = node;

	return (node);
}
