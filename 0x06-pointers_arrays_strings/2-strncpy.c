#include <string.h>

/**
* _strncpy - to copy a string
*@dest: char pointing to the destination
*@src: char pointing to the source
*@n: num of bytes from src to copy
* Return: the address of dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
