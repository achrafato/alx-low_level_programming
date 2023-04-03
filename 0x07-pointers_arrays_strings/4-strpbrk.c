#include <string.h>
/**
 * _strpbrk - locates a character in a string
 *@s: pointer to char
 *@accept: character to be matched
 * Return: the address of char or 0
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
int n = strlen(accept);

for (; *s != '\0'; i++)
{
for (j = 0; j < n; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}
return (0);
}
