#include "lists.h"

/**
 * sum_listint - sums of all the data (n)
 * of a listint_t linked list.
 * @head: Head of list
 *
 * Return: Sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
