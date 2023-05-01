#include "lists.h"
/**
 * sum_listint - get nth of certain node
 * @head: points to int
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (current)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
