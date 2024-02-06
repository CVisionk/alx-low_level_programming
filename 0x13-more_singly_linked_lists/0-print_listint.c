#include "lists.h"

/**
 * print_listint - print the elements in the list
 * @h: the start of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int n_nodes = 0;
while (h != NULL)
{
int num = h->n;
char buffer[20];

if (num < 0)
{
_putchar('-');
num = -num;
}

int i = 0;
do {
buffer[i++] = num % 10 + '0';
num /= 10;
} while (num != 0);

while (i > 0)
{
_putchar(buffer[--i]);
}
_putchar('\n');
++n_nodes;
h = h->next;
}
return (n_nodes);
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
