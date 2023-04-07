#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: An array containing the program command line arguments
 * @argc: contain the length of command line arguments
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
{
	printf("0\n");
	return (0);
}
for (i = 1; i < argc; i++)
{
char *str = argv[i];

if (*str >= 48 && *str <= 57)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);


return (0);
}
