#include <stdio.h>

/**
* main - Numberz
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 0; i < 16 ; i++)
		putchar((i % 16) + '0');

	putchar('\n');

	return (0);
}
