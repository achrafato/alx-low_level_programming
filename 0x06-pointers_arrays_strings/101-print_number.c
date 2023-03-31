#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be print
 */

void print_number(int n)
{
int last, first, crat = 0;
if (n == 0)
{
_putchar('0');
}
if (n < 0)
{
_putchar('-');
n *= -1;
}

while (n > 0)
{
last = n % 10;
crat = crat * 10 + last;
n /= 10;
}
while (crat > 0)
{
first = crat % 10;
_putchar(first + '0');
crat /= 10;
}
}
