#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of list
 *
 * @h: pointer to the head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n_nodes = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n_nodes++;
	}

	return (n_nodes);

}
