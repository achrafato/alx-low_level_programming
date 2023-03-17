#include <stdio.h>

/**
* main -  prints all possible different combinations of three digits.
*
* Return: Always 0.
*/
int main(void)
{
	int i, j, k;

	for (k = 0; k < 8; k++)
	{
		for (i = k + 1; i < 9 ; i++)
		{
			for (j = i + 1 ; j <= 9; j++)
			{
				putchar(k + '0');
				putchar(i + '0');
				putchar(j + '0');

				if (j == 9 && i == 8 && k == 7)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
