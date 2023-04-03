/**
 * _memcpy - copies memory area
 *@dest: pointer to char
 *@src: pointer to char
 *@n: Number of bytes to be copied
 * Return: the address of char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*dest = src[i];
dest++;
i++;
}

return (dest);
}
