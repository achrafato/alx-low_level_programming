#include <stddef.h>
#include "lists.h"

/**
 * print_listint - loop through linkedList to get totall num of nodes
 * @h: pointer to struct
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

