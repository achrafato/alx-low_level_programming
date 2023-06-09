#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
*Return: return 0
*/
int main(void)
{

unsigned long i, current, prev, next;

prev = 1;
current = 2;

printf("1, ");
printf("2, ");
for (i = 1; i < 49; i++)
{
next = prev + current;
if (i == 48)
{
printf("%lu\n", next);
exit(0);
}
printf("%lu, ", next);
prev = current;
current = next;
}

printf("\n");
return (0);
}
