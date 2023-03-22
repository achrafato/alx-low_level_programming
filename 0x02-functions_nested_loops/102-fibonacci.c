#include <stdio.h>

/**
*main - prints count of multiples
*of 3 or 5 below 1024
*Return: return 0
*/
int main(void)
{

int i, current, prev, next;

prev = 1;
current = 2;

printf("1, ");
printf("2, ");
for (i = 0; i < 50; i++)
{
next = prev + current;
printf("%d, ", next);
prev = current;
current = next;
}

printf("\n");
return (0);
}
