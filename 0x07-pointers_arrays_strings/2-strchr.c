/**
 * _strchr - locates a character in a string
 *@s: pointer to char
 *@c: the character to be searched for
 * Return: the address of char.
 */
char *_strchr(char *s, char c)
{
while (*s != c)
{
s++;
}
return (s);
}
