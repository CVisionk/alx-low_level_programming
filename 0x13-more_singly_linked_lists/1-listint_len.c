#include "lists.h"

/**
 * print_listint_len - returns the number of elements in a list.
 * @h: the start of the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
