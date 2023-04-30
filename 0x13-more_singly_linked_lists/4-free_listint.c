#include "lists.h"

/**
 * free_listint -  free linkedList
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
