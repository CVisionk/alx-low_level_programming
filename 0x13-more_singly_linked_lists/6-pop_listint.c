#include "lists.h"

/**
 * free_listint - deletes the head node of list
 * @head: the start of the list
 *
 * Return: returns the head node’s data
 */

int pop_listint(listint_t **head){
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	temp = NULL;
	return (n);

}
