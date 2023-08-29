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
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to head of list
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *loop, *ptr;
	unsigned int i = 0;

	if (!(*h) || !(*h))
		return (0);

	loop = loop_finder(*h);
	if (loop)
		loop->next = NULL;

	while (*h)
	{
		ptr = *h;
		*h = (*h)->next;
		free(ptr);
		i++;
	}

	return (i);
}
