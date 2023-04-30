#include "lists.h"

/**
 * pop_listint - pop the first node
 * @head: points to pointer to int
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *current;

	if (*head == NULL)
		return (0);

	current = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current;

	return (n);
}
