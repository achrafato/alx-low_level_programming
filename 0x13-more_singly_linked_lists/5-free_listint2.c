#include "lists.h"

/**
 * free_listint2 - free list and assign head to null
 * @head: pointer to struct
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *h;

	h = *head;
	while (h)
	{
		current = h->next;
		free(h);
		h = current;
	}
	free(h);
	*head = NULL;
}
