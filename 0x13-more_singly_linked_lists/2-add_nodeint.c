#include "lists.h"

/**
 * listint_t - adds a new node at the beginning of a list.
 * @head: the start of the list
 * @n: integer to be added
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
    if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}