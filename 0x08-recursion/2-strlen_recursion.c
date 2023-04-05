
/**
 * _strlen_recursion - measure the length of a string
 *@s: pointing to string to be measured
 * Return: number or 0.
 */
int _strlen_recursion(char *s)
{

if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}

return (0);
}
