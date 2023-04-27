#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - loop through linkedList
 * @h: pointer to struct which to be printed
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t n = 0;


while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
n++;
}
return (n);
}

