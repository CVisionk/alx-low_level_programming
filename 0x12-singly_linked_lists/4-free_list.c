#include "lists.h"

/**
 * free_list - frees a list.
 * @head: head of a list.
 */
void free_list(list_t *head)
{
    list_t *current = head;
    list_t *next;

    while (current != NULL)
    {
        next = current->next;  // Save the next pointer before freeing the current node
        free(current->str);    // Free the string in the current node
        free(current);         // Free the current node
        current = next;        // Move to the next node
    }
}
