#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add new node at the end
 * @head: pointer to struct
 * @str: string to be assigned
 * Return: the address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
int n = 0;
list_t *ptr, *temp;

if (head == NULL || str == NULL)
	return (NULL);

temp = malloc(sizeof(list_t));
if (temp == NULL)
	return (NULL);

temp->str = strdup(str);
if (temp->str == NULL)
{
free(temp);
return (NULL);
}

while (str[n] != '\0')
{
n++;
}
temp->len = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (temp);
}

for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
{
;
}
ptr->next = temp;

return (temp);
}
