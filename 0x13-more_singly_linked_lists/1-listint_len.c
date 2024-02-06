#include "lists.h"

/**
 * print_listint_len - returns the number of elements in a list.
 * @h: the start of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
