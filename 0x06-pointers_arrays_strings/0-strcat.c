#include <string.h>

/**
* _strcat - concatenates two strings
*@dest: char pointing to the destination
*@src: char pointing to the source
* Return: the address of dest.
*/

char *_strcat(char *dest, char *src)
{
int size1 = strlen(dest);

while (*src != '\0')
{
dest[size1] = *src;
src++;
size1++;
}
return (dest);
}
