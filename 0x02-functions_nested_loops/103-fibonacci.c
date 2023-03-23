#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
*Return: return 0
*/
int main(void)
{

unsigned long i, current, prev, next, sum;

prev = 1;
current = 2;
sum = 2;

for (i = 1; i < 49; i++)
{
next = prev + current;
if ((next % 2) == 0 && next <= 4000000)
{
sum += next;
}

prev = current;
current = next;
}

printf("%lu\n", sum);

return (0);
}
