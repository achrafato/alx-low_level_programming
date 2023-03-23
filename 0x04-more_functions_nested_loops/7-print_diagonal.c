#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: The number of diagonals to be printed
 * Return: nothing.
 */

void print_diagonal(int n)
{
int i, j;
if (!(n <= 0))
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (j == i)
{
_putchar(92);
}
else
{
_putchar(' ');
}
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
