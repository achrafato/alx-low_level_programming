#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be print
 */

void print_number(int n)
{
unsigned int num;
int last, first, crat = 0;
if (n == 0)
{
_putchar('0');
}
if (n < 0)
{
_putchar('-');
num = -n;
}

while (num > 0)
{
last = num % 10;
crat = crat * 10 + last;
num /= 10;
}
while (crat > 0)
{
first = crat % 10;
_putchar(first + '0');
crat /= 10;
}
}
