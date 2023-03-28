#include <stdio.h>
/**
 * print_array - swap numbers
 *@a: integer that pointing to the array
 *@n: the number of elements
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d\n", a[n - 1]);
}
