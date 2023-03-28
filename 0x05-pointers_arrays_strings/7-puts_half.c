#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *@str: char that pointing to the string to be printed
 */

void puts_half(char *str)
{
int size = strlen(str);
int index = size / 2;

while (index < size)
{
_putchar(str[index]);

index++;
}
_putchar('\n');
}
