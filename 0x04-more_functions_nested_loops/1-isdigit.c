
/**
 * _isdigit - tells if input is digit or not.
 * @c: the number to be validate
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
int ascii = c + '0';
if (ascii >= 48 && ascii <= 57)
{
return (1);
}
else
{
return (0);
}
}
