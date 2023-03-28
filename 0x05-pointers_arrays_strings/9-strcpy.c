#include <stdio.h>
/**
 * _strcpy - copy string
 *@dest: pointing to dest
 *@src: pointing to src
 * Return: return a pointer to char
 */
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;
while (*src != '\0')
{
*dest_ptr = *src;
src++;
dest_ptr++;
}
*dest_ptr = '\0';
return (dest);
}
