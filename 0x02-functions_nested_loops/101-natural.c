#include <stdio.h>

/**
* main - list all the natural numbers below 1024 that are multiples of 3 or 5
*
* Return: 0
*/

int main(void)
{
int i, sum;

for (i = 1; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum += i;
}
}
printf("%d", sum);
return (0);
}
