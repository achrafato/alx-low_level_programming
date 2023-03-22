#include <stdio.h>
#include <stdlib.h>

/**
* print_times_table - prints the n times table
* @n: n denotes the last number
* Return: .
*/

void print_times_table(int n)
{
if (n > 15 || n < 0)
{
exit(0);
}

int ii, jj;

for (ii = 0; ii <= n; ii++)
{
for (jj = 0; jj <= n; jj++)
{
printf("%d", (ii * jj));
if (jj != n)
{
if ((ii * jj) <= 9)
{
printf(",   ");
}
else if ((ii * jj) >= 100)
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
