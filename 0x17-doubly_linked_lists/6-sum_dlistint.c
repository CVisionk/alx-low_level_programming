#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: pointer to head of list
 * Return: 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
