#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to end of list
 * @head: head of list
 * @n: variable to add to list
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (current)
	{
		while (current->next)
			current = current->next;
		newNode->prev = current;
		current->next = newNode;
	} else
		*head = newNode;

	return (newNode);
}
