#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: number of byte to be allocated
 * Return: the address of new allocated space.
 */

void *malloc_checked(unsigned int b)
{
unsigned int *a;

a = malloc(b);

if (a == NULL)
{
exit(98);
}
return (a);
}
