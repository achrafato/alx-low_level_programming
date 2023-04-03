#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *@s: pointer to char
 *@c: the character to be searched for
 * Return: the address of char.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
return (NULL);
}
