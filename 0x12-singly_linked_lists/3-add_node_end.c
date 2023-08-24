#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	char *s;
	int i;

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

	ptr = *head;
	if (!ptr)
		*head = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}

	new->str = s;
	new->len = i;
	new->next = NULL;

	return (new);
}
