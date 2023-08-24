#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;
	char *s;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; s[i]; i++)
		;

	new->str = s;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
