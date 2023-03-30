#include <string.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*@str:pointer to char
*Return: str
*/

char *string_toupper(char *str)
{
int i, size = strlen(str);
for (i = 0; i < size ; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 'a' + 'A';
}
}
return (str);
}
