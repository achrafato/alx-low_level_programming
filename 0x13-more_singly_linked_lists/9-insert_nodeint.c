#include "lists.h"

/**
 * insert_nodeint_at_index - insert not at certain index
 * @head: points to pointer to int
 * @idx: index of new node
 * @n: value to be assigned
 * Return: the address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *tmp;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	current = *head;
	while (current)
	{
		if (idx == i && idx != 0)
		{
			tmp->next = current->next;
			current->next = tmp;
			break;
		}

		if (i != 0)
			current = current->next;
		i++;
	}
	i = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		i++;
	}

	if ((i - 1) < idx)
		return (NULL);
	return (tmp);
}
