#include "lists.h"
#include <stddef.h>

/**
 * list_len - loop through linkedList to the number of nodes
 * @h: pointer to struct which to be printed
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
