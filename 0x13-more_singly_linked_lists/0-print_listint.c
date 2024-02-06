#include "lists.h"


size_t print_listint(const listint_t *h) {
    int n_nodes = 0;

    while (h != NULL) {
            printf("%d\n", h->n);
        ++n_nodes;
        h = h->next;
    }
    return n_nodes;
}


int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}