#include "lists.h"


size_t print_list(const list_t *h) {
    const list_t *current = h;
    int n_nodes = 0;

    while (current != NULL) {
        if (current->str == NULL) {
            printf("[%d] (nil)\n", 0);
        } else {
            printf("[%d] %s\n", current->len, current->str);
        }
        ++n_nodes;
        current = current->next;
        if (current != NULL) {
            printf(" ");
        }
    }
    return n_nodes;
}
