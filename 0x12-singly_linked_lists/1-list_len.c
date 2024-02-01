#include "lists.h"


size_t list_len(const list_t *h){
    const list_t *current = h;
    int n_nodes = 0;

    while (current != NULL) {
        current = current->next;
        ++n_nodes;
    }
    return n_nodes;
}