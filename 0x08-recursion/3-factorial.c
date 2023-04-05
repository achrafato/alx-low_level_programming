
/**
*factorial - measure the length of a string
*@n: number to be measured
*Return: num, 0 or -1
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
