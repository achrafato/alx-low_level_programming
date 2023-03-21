#include "main.h"

/**
* print_alphabet - prints the alphabet
*
* Return: Always 0.
*/
void print_alphabet(void)
{
int i;
char alphat[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
_putchar(alphat[i]);
}
_putchar('\n');
}
