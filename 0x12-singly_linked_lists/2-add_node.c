#include "lists.h"

/**
 * add_node - adds a node to a list.
 * @head: head of list.
 * @str: string to add to list.
 * Return: pointer to newnode.
 */
list_t *add_node(list_t **head, const char *str){
       

    list_t *newNode = malloc(sizeof(list_t));
    if (newNode == NULL)
        return NULL;

    size_t len = strlen(str);

    newNode->len = len;
    newNode->str = strdup(str);
    newNode->next = *head;

    *head = newNode;

    return newNode;

}

