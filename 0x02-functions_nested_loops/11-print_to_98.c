#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print natural numbers from n to 98
* @n: n denotes the number to start from
* Return: .
*/

void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}

}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);

if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
}
