#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: An array containing the program command line arguments
 * @argc: contain the length of command line arguments
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{

if (argc >= 3)
{
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
