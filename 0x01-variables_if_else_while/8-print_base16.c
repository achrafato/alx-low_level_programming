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
		if (i < 10)
			putchar((i % 16) + '0');
		else
			putchar((i % 16) + 'W');

	putchar('\n');

	return (0);
}
