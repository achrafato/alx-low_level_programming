#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value
 * @max: the biggest value
 * Return: the address of new allocated array or NULL.
 */

int *array_range(int min, int max)
{
int *arr, i, j = 0;

if (min > max)
{
return (NULL);
}

arr = (int *)calloc(max + 1, sizeof(int));

if (arr == NULL)
return (NULL);
for (i = min; i <= max; i++, j++)
{
arr[j] = i;
}

return (arr);
}
