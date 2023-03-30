#include <string.h>

/**
* _strcmp - comparing two string
*@s1: char pointing to string to be comparing
*@s2: char pointing to string to be comparing
* Return: number based on the status.
*/

int _strcmp(char *s1, char *s2)
{
int i, size = strlen(s1);

for (i = 0; i < size; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
