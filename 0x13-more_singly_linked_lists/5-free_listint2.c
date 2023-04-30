#include "lists.h"

/**
 * free_listint2 - free list and assign head to null
 * @head: pointer to struct
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
