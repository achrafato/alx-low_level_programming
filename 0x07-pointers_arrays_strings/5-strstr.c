/**
 * _strstr - locates a substring.
 *@haystack: pointer to char
 *@needle: pointer to char
 * Return: the address of char or 0
 */
char  *_strstr(char *haystack, char *needle)
{
char *ch1, *ch2;

while (*haystack != '\0')
{
ch1 = haystack;
ch2 = needle;

while (*haystack != '\0' && *ch2 != '\0' && *haystack == *ch2)
{
haystack++;
ch2++;
}

if (*ch2 == '\0')
{
return (ch1);
}
haystack = ch1 + 1;
}
return (0);
}
