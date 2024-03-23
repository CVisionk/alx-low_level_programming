#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds new node at the biginning of list
 * /
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if(!newNode)
		return NULL;
	newNode->n = n;
	newNode->prev = NULL;

	if(*head)
		(*head)->prev = newNode;

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
