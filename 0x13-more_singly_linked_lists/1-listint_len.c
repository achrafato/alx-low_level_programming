#include <stddef.h>
#include "lists.h"

/**
 * listint_len - loop through linkedList to get totall num of nodes
 * @h: pointer to struct
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

