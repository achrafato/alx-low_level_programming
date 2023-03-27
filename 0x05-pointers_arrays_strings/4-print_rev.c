#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *@str: pointing to the string that will be printed
 */

void print_rev(char *str)
{
	int i;

	for (i = strlen(str) - 1; i >= 0; i--)
	{
		write(1, &str[i], 1);
	}
	_putchar('\n');
}
