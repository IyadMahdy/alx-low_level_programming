#include "lists.h"

unsigned int list_length(listint_t *head);

/**
 * delete_nodeint_at_index - deletes the node at index @index of a linked list.
 *
 * @head: Pointer to head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0, list_len = list_length(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
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
