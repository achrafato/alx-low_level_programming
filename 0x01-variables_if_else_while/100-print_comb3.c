#include <stdio.h>

/**
* main -  prints all possible different combinations of two digits.
*
* Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{

		for (j = i + 1 ; j <= 9; j++)
		{

			putchar(i + '0');
			putchar(j + '0');

			if (j == 9 && i == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
