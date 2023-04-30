#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: pointer to pointer to struct
 * @n: number to be added
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = temp;

	return (temp);
}
