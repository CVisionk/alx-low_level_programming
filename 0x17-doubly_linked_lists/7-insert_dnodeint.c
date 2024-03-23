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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of node.
 * @idx: index of node.
 * @n: integer of new node.
 * Return: address of new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NodeAtIndex = get_dnodeint_at_index(*h, idx);
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!NodeAtIndex || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NodeAtIndex;
	newNode->prev = NodeAtIndex->prev;
	(NodeAtIndex->prev)->next = newNode;
	NodeAtIndex->prev = newNode;

	return (newNode);
}
