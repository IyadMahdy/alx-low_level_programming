#include "lists.h"

/**
 * sum_dlistint - Sum of all values in nodes of list
 * @head: Head of list
 *
 * Return: Sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
