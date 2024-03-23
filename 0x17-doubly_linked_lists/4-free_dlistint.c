#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of list;
 *
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
