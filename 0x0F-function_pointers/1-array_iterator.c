#include <stddef.h>
/**
 * array_iterator - execute function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array && action)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
