#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string
 *@str: pointing to the string that will be printed
 */

void _puts(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	_putchar('\n');
}
