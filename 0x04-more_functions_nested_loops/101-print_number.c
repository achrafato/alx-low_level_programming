#include "main.h"

/**
 * print_number - prints an integer
 *@n: number to be displayed
 * Return: 0.
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n *= -1;
}
if (n >= 1000)
{
int f1 = n % 1000;
int f2 = f1 % 100;
_putchar((n / 1000) + '0');
_putchar((f1 / 100) + '0');
_putchar((f2 / 10) + '0');
_putchar((f2 % 10) + '0');
}
else if (n >= 100)
{
int three = n % 100;
_putchar((n / 100) + '0');
_putchar((three / 10) + '0');
_putchar((three % 10) + '0');
}
else if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n <= 9)
{
_putchar((n % 10) + '0');
}
}
