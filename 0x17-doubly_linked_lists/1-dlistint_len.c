#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints size of list
 *
 * @h: pointer to the head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);

}
