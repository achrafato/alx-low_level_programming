#include "lists.h"

/**
 * add_node - add new node
 * @h: pointer to struct which to be
 * Return: number of the address nodes.
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
