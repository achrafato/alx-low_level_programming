#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: number of byte to be allocated
 * @c: character to be passed
 *
 * Return: null or the address of string.
 */

char *create_array(unsigned int size, char c)
{

char *st;
unsigned int i;

if (size == 0)
{
return (NULL);
}

st = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
st[i] = c;
}

return (st);
}
