#include "lists.h"
/**
 * list_len - loop through linkedList and return the number of nodes
 * @h: pointer to struct which to be printed
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
unsigned int n = 0;

while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
