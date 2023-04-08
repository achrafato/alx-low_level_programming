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
int coins[5] = {1, 2, 5, 10, 25};
int state = 0;
int index = 0;
int min, sub, i, num;

if (argc == 0)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
while (state != 1)
{
if (num > coins[index])
index++;

if (index == 4)
state = 1;
}
for (i = index; i >= 0; i--)
{
min = num / coins[index];
sub = num - (coins[index] * min);
if (sub == 0)
printf("%d\n", min);
break;
if (sub < coins[index - 1])
printf("%d\n", sub);
break;
}
return (0);
}
