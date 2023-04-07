/**
 * _memset - check the code
 *@s: pointer to char
 *@b: the value to be assigned
 *@n: Number of bytes to be filled
 * Return: the address of char.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
