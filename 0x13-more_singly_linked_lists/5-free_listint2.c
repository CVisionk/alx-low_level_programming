#include "lists.h"

/**
 * free_listint - frees up all the memory allocated for a list
 * @head: the start of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
    if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
        *head = (*head)->next;
        free(temp);
	}
    free(*head);
    head=NULL;
}
