#include <string.h>

/**
 * rot13 -  encodes a string using rot13
 * @str: pointer to string
 * Return: the address of my string.
 */

char *rot13(char *str)
{
int i, j, size = strlen(str);
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; i < size; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}
