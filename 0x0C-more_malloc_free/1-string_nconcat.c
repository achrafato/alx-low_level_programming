#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: the length to be allocated
 * Return: the address of new allocated space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1 = 0, len2 = 0;
char *s;
unsigned int i, j, k = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s = malloc(sizeof(char) * n);

while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (s == NULL)
{
return (NULL);
}

for (i = 0; i < n && s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = i; j < n && s2[k] != '\0'; j++)
{
s[j] = s2[k];
k++;
}
s[n+1] = '\0';
return (s);
}
