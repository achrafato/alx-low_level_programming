#include "main.h"

/**
* times_table - prints times table
*
* Return: time table of each number
*/


void times_table(void)
{

int row, col;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
int mult = row * col;
if (mult <= 9)
{
_putchar('   ');
}
else
{
_putchar((mult / 10) + '0');
}

_putchar((mult % 10) + '0');

if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar(10);
}
}
