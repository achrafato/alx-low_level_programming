#include "lists.h"

/**
 * list_len - loop through linked list and return number of nodes
 * @h: pointer to struct
 * Return: number of  nodes.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
