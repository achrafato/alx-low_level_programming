#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *@str: char that pointing to the string to be printed
 */

void puts_half(char *str)
{
int index;
int size = strlen(str);

if (size % 2 == 0)
index = size / 2;
else
index = (size - 1) / 2;

while (index < size)
{
_putchar(str[index]);

index++;
}
_putchar('\n');
}
