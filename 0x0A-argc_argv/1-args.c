#include <stdio.h>

/**
 * main - prints the number of arguments passed in
 * @argv: An array containing the program command line arguments
 * @argc: contain the length of command line arguments
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

printf("%d\n", argc - 1);

return (0);
}
