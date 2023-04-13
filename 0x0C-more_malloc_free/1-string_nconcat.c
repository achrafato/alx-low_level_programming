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
unsigned int len1 = 0, len2 = 0, T = 0;
char *s;
unsigned int i, j, k = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
T = len1 + (n < len2 ? n : len2);
s = (char *)malloc(sizeof(char) * (T + 1));

if (s == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
	s[k] = s1[i];
	k++;
}


for (j = 0; j < n && s2[j] != '\0'; j++)
{
	s[k] = s2[j];
	k++;
}
	s[T] = '\0';
	return (s);

}
