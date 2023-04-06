#include <string.h>

/**
 * check_palindrome - to check whether string is palindrome or not.
 * @s : string to be checked
 * @leng : size of string
 * @n : current index
 * Return: 1 or 0
 */

int check_palindrome(char *s, int leng, int n)
{
if (n >= leng)
	return (1);

if (s[n] != s[leng])
	return (0);

if (s[n] != '\0' && s[n] == s[leng])
{
leng--;
n++;
return (check_palindrome(s, leng, n));
}
return (0); /*This line  has no role, it is just to surpass the error*/
}

/**
 * is_palindrome - check whether string is palindrome or not.
 * @s : string to be checked
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
int size = strlen(s) - 1;
int n = 0;
return (check_palindrome(s, size, n));
}
