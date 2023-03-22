#include "main.h"

/**
* times_table - prints times table
*
* Return: time table of each number
*/


void times_table(void)
{
int digit, mult, result;
for (digit = 0; digit < 10; digit++)
{
_putchar('0');

for (mult = 1; mult < 10; mult++)
{
_putchar(',');
_putchar(' ');
result = digit * mult;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar(10);
}
}
