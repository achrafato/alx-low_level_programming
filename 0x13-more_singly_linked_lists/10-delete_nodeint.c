#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: points to pointer to struct
 * @index: index of desired node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	while (current)
	{
		current = current->next;
		i++;
	}

	if ((i - 1) < index)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	i = 0;
	current = *head;
	while (current)
	{
		if (index == i)
		{
			next = current->next;
			current->next = current->next->next;
			free(next);
			return (1);
		}

		if (i != 0)
			current = current->next;

		i++;
	}
	return (-1);
}
