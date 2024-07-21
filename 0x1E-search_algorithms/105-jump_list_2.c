#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * go_to_index - Traverse the linked list to find the node at a specific index
 * @head: Pointer to the head of the linked list
 * @index: The index of the node to find
 * 
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
listint_t *go_to_index(listint_t *head, size_t index)
{
	listint_t *current = head;

	while (current != NULL)
	{
		if (current->index == index)
			return current;
		current = current->next;
	}
	return NULL;
}

/**
 * jump_list - function that searches for a value in a sorted
 *             list of integers using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located, 0 otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size = sqrt(size), index = 0;
	listint_t *current[2], *nuller = malloc(sizeof(*nuller));
	int i;

    current[0] = list;
    current[1] = go_to_index(list, jump_size);

	if (list == NULL)
		return (NULL);

    while (current[1] != NULL && current[1]->n < value)
    {
		index += jump_size;
        printf("Value checked at index [%ld] = [%d]\n", index, current[1]->n);
		current[0] = current[1];
		printf("Before index\n");
		current[1] = go_to_index(current[1], index + jump_size);
		printf("After index [1]: %d %ld %ld\n", current[1]->n, current[1]->index, index);
    }
    
	printf("2Value checked at index [%ld] = [%d]\n", index, current[1]->n);
	printf("Value found between indexes [%ld] and [%ld]\n", index, index + jump_size);

	for (i = 0; i < jump_size + 1; i++)
	{
		if (index + i > size - 1)
			return (list);
		current[1] = go_to_index(current[1], index);
		if (current[1] == NULL)
			return (nuller);
		printf("Value checked array[%ld] = [%d]\n",
		 index + i, current[1]->n);
		if (current[1]->n == value)
			return (current[1]);
	}

	return (nuller);
}