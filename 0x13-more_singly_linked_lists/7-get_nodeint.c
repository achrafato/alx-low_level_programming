#include "lists.h"

/**
 * get_nodeint_at_index - get nth of certain node
 * @head: points to int
 * @index: index of the node
 * Return: nth.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;
	current = head;

	for (i = 0; i <= index; i++)
	{
		if (current && index != i)
			current = current->next;
		else
			return (current);
	}
	return (NULL);
}
