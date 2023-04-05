#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s : pointing to string to be printed
 */
void _print_rev_recursion(char *s)
{

if (*s == '\n' && strlen(s) > 0)
{
s += strlen(s) - 1;
}

if (*s != '\n' && strlen(s) > 0)
{
_putchar(*s);
s--;

if (*s != '\n')
{
_print_rev_recursion(s);
}
else
{
_putchar('\n');
}
}
}
