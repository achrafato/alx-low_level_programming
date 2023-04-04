#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *@s: pointer to char
 *@accept: pointer to char
 * return : return the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int position = 0;
unsigned int a = strlen(s), b = strlen(accept);
unsigned int i, j;

for (i = 0; i < a; i++)
{
for (j = 0; j < b; j++)
{
if (s[i] == accept[j])
{
position++;
break;
}
}
if (s[i] != accept[j])
{
break;
}
}
return (position);
}
