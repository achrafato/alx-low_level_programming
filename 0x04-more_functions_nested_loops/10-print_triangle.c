#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: the size of the triangle
 * Return: nothing.
 */

void print_triangle(int size)
{

int i, hashes, spaces;

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (spaces = size - i; spaces >= 1; spaces--)
{
putchar(' ');
}
for (hashes = 1; hashes <= i; hashes++)
{
putchar('#');
}
putchar('\n');
}
}

}
