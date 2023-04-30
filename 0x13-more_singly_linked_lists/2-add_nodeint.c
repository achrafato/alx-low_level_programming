#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning
 * @head: pointer to pointer to struct
 * @n: number to be added
 * Return: pointer to head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (*head);
}
