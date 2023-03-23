#include "main.h"

/**
 * print_square - prints a square
 * @size: The size of the square
 * Return: nothing.
 */

void print_square(int size)
{
int i, j;
if (!(size <= 0))
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar(10);
}
}
else
{
putchar('\n');
}
}
