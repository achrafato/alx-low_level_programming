#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 * Return: the address of my string.
 */

char *cap_string(char *str)
{
int i, size = strlen(str);

for (i = 0; i < size; i++)
{
if ((str[i - 1] == ' ' && (str[i - 2] == '.' || str[i - 2] == '!'
|| str[i - 2] == ',' || str[i - 2] == ';' || str[i - 2] == '?'
|| str[i - 2] == '(' || str[i - 2] == ')' || str[i - 2] == '{'
|| str[i - 2] == '}')) || ((str[i - 1] == ' ' || str[i - 1] == '\n'
|| str[i - 1] == '\t') && (i >= 2)))
{

if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 'a' + 'A';
}

}
}
return (str);
}
