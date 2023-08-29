#include "lists.h"

/**
 * loop_finder - Finds a loop in a list
 * @head: Head of list
 *
 * Return: Node where loop occurs
 */
listint_t *loop_finder(listint_t *head)
{
	listint_t *p, *q;

	if (!head)
		return (NULL);
	p = head;
	q = head->next;
	while (q)
	{
		if (q == q->next)
			return (q);

		while (p != q)
		{
			if (q->next == p)
				return (q);
			p = p->next;
		}
		p = head;
		q = q->next;
	}
	return (NULL);
}

/**
 * print_listint_safe - Prints listint_t list safely
 * @head: Head of list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	listint_t *loop_node;

	if (!head)
		return (0);
	loop_node = loop_finder((listint_t *)head);

	while (head != loop_node)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	if (loop_node)
	{
		printf("[%p] %d\n", (void *)loop_node, loop_node->n);
		printf("-> [%p] %d\n", (void *)loop_node->next,
				(loop_node->next)->n);
		i++;
	}
	return (i);
}
