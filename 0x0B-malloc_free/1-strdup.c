#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocate and return newly space
 * @str: pointer to char
 *
 * Return: null or allocation space.
 */

char *_strdup(char *str)
{
char *st;
unsigned int i;
st = malloc(sizeof(char) * strlen(str));

if (st == NULL || str == NULL)
{
return (NULL);
}

for (i = 0; i < strlen(str); i++)
{
st[i] = str[i];
}

return (st);

}
