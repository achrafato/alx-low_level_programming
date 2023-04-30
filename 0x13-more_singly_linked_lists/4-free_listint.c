#include "lists.h"

/**
 * free_listint - add new node at the end
 * @head: pointer to struct
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
