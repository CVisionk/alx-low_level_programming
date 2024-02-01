#include "lists.h"


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

