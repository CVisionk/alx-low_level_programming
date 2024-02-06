#include "lists.h"

/**
 * free_listint - adds a new node at the end of a list.
 * @head: the start of the list
 *
 * Return: number of elements
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
        free(current->n);
        free(current);
		current = next;
	}
}