#include "lists.h"

/**
 * sum_listint - Returns sum of all the data in list
 *
 * @head: Head of pointer
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
