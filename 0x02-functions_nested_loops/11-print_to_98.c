#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print natural numbers from n to 98
*
* Return: .
*/

void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(',');
_putchar(' ');
}
}

printf("98");
_putchar('\n');
}
