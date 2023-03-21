#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: number to be calculated
* Return: return nothing.
*/

int print_last_digit(int n)
{
if (n < 0)
{
putchar((-n % 10) + '0');
return (-n % 10);
}
else
{
putchar((n % 10) + '0');
return (n % 10);
}
}
