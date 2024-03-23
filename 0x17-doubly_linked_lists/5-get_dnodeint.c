#include "lists.h"
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
