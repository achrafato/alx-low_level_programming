#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;

	a = n & 1;
	if (n >> 1)
		print_binary(n >> 1);

	_putchar(a + '0');
}

