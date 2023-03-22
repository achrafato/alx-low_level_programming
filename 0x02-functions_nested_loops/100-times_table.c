#include <stdio.h>
#include <stdlib.h>

/**
* print_times_table - prints the n times table
* @n: n denotes the last number
* Return: .
*/

void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
{
exit(0);
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j != 0)
{
if ((i * j) <= 9)
{
printf(",   ");
}
else if ((i * j) >= 100)
{
printf(", ");
}
else
{
printf(",  ");
}
}
}
printf("%d", (i * j));
printf("\n");
}
}
