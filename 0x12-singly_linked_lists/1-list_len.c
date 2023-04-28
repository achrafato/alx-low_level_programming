#include "lists.h"

/**
 * list_len - loop through linkedList and return the number of nodes
 * @h: pointer to struct which to be printed
 * Return: number of nodes.
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
