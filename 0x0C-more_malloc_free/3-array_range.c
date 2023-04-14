#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value
 * @max: the biggest value
 * Return: the address of new allocated array or NULL.
 */

int *array_range(int min, int max)
{
int *arr, t, i;

if (min > max)
{
	return (NULL);
}
	t = (max - min) + 1;
	arr = (int *)calloc(t, sizeof(int));

if (arr == NULL)
	return (NULL);
for (i = 0; i < t; i++)
{
	arr[i] = min++;
}

	return (arr);
}
