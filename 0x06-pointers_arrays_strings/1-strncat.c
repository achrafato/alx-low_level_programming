#include <string.h>

/**
* _strncat - concatenates two strings
*@dest: char pointing to the destination
*@src: char pointing to the source
*@n: num of bytes from src to include
* Return: the address of dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int size1 = strlen(dest);
int count = 1;
while (n >= count)
{
dest[size1] = *src;
src++;
size1++;
count++;
}
dest[size1] = '\0';
return (dest);
}
