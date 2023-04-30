#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - loop through linkedList to print data
 * @h: pointer to struct
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
