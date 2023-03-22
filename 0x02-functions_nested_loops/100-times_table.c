#include <stdio.h>

/**
* print_times_table - prints the n times table
* @n: n denotes the last number
* Return: .
*/

void print_times_table(int n)
{
if (n > 15 || n < 0)
{
printf("");
return (0);
}

int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
printf("%d", (i * j));
if (j != n)
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
printf("\n");
}
}
