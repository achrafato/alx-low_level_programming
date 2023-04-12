#include <stdlib.h>

/**
 * argstostr -  concatenates all the passed arguments
 * @ac: length of argument
 * @av: array of argument
 * Return: the address of new allocated space or NULL.
 */

char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *st;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len += 1; /* +1 for newline character*/
}
st = malloc(sizeof(char) * len);

if (st == NULL)
{
return (NULL);
}
len = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
st[len++] = av[i][j];
}
st[len++] = '\n';
}

return (st);
}
