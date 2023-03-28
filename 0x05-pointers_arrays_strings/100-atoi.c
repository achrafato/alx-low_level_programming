/**
 * _atoi - convert a string to an integer.
 *@s: pointer to string
 * Return: integer.
 */

int _atoi(char *s)
{
int num = 0, signe = 1;
int neg = 0, pos = 0;
while (*s != '\0')
{
if (!((*s >= 48) && (*s <= 57)) && num > 0)
{
break;
}
if ((*s >= 48) && (*s <= 57))
{
num = (num * 10) + (*s - '0');
}
else
{
if (*s == '-')
{
neg++;
}
else if (*s == '+')
{
pos++;
}
}
s++;
}

if ((neg % 2) != 0)
{
signe = -1;
}
return (num *signe);
}
