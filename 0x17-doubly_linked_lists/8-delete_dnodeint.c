#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to the head of the list
 * @index: index of nth node
 * Return: pointer to the nth node, or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current && count != index)
	{
		current = current->next;
		count++;
	}
	if (index != count)
		return (NULL);
	else
		return (current);
}

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to pointer to head node
 * @index: index of node to delete
 * Return: 1 on success, -1 if failed;
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeAtIndex = get_dnodeint_at_index(*head, index);

	if (nodeAtIndex)
	{
		if (nodeAtIndex->prev)
			nodeAtIndex->prev->next = nodeAtIndex->next;
		if (nodeAtIndex->next)
			nodeAtIndex->next->prev = nodeAtIndex->prev;
		if (index == 0)
			*head = nodeAtIndex->next;

		free(nodeAtIndex);
		return (1);
	} else
		return (-1);
}
