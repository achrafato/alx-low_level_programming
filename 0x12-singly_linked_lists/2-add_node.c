#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add new node
 * @head: head
 * @str: str
 * Return: number of the address nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	int n = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	new_node->str = strdup(str);
	while (str[n] != '\0')
		n++;
	new_node->len = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
