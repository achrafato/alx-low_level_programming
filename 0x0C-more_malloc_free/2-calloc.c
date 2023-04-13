#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of spaces
 * @size: size of space to be allocated for each item
 * Return: the address of new allocated array or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *space;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
space = calloc(nmemb, size);

if (space == NULL)
{
return (NULL);
}

return (space);
}
