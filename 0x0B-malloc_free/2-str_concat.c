#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: null or allocation space.
 */

char *str_concat(char *s1, char *s2)
{
int leng1 = 0, leng2 = 0;
int i, j, k = 0;
char *st;

if (s2 == NULL)
	s2 = "";
if (s1 == NULL)
	s1 = "";

while (s1[leng1] != '\0')
{
leng1++;
}

while (s2[leng2] != '\0')
{
leng2++;
}

st = malloc(sizeof(char) * (leng1 + leng2 + 1));

if (st == NULL)
{
return (NULL);
}

for (i = 0; i < leng1; i++)
{
st[i] = s1[i];
}

for (j = i; j < (leng1 + leng2); j++)
{
st[j] = s2[k];
k++;
}

st[j] = '\0';
return (st);

}
