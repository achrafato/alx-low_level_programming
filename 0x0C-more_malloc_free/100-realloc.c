#include <stdlib.h>
/**
 * _realloc - reallocing memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size in bytes for ptr
 * @new_size: the new size in bytes
 *
 * Return: NULL or the address of new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *p1;
char *c1;
char *c2;
if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
p1 = malloc(new_size);
if (p1 == NULL)
{
return (NULL);
}
free(ptr);
return (p1);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
p1 = malloc(new_size);
c1 = (char *)p1;
c2 = (char *)ptr;
if (p1 == NULL)
{
return (NULL);
}
for (i = 0; i < old_size; i++)
{
c1[i] = c2[i];
}
free(ptr);
return (p1);
}
