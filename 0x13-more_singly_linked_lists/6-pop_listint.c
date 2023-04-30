#include "lists.h"

/**
 * pop_listint - pop the first node
 * @head: points to pointer to int
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *current;

current = *head;
	while (current)
	{
		current = current->next;
		n++;
	}

	if (n == 0)
	{
		return (n);
	}

	if ((*head)->next)
	{
		current = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = current;
		return (n);
	}
	else
	{
		n = (*head)->n;
		free(*head);
		return (n);
	}
}
