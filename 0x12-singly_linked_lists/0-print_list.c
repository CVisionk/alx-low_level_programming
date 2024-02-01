#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


size_t print_list(const list_t *h){

     const list_t *current = h;
     int n_nodes = 0;
    while (current != NULL) {

        if(current->str==NULL){
        printf("%s","[");
        printf("%d", 0);
        printf("%s","]");
        printf(" ");
        printf("%s", "(nil)");
        printf("\n");
        ++n_nodes;
        current = current->next;
        }
        printf("%s","[");
        printf("%d", current->len);
        printf("%s","]");
        printf(" ");
        printf("%s", current->str);
        printf("\n");
        ++n_nodes;
        current = current->next;

        // Print a space if there is a next node
        if (current != NULL) {
            printf(" ");
        }
}
 return n_nodes;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}