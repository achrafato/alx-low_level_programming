#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s : pointing to string to be printed
 */
void _print_rev_recursion(char *s)
{

if (*s == '\n')
{
while (*s != '\0')
{
s++;
}
}

if (*s != '\n')
{
s--;
_putchar(*s);

if (*s != '\n')
{
_print_rev_recursion(s);
}

}
}
