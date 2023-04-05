/**
 * SqertBehalfMe - to look for the square of my number
 * @a : my number
 * @b : square of my number
 * Return: square or -1
 */

int SqertBehalfMe(int a, int b)
{
if (b == 0)
return (0);

if (b * b > a)
return (-1);

if (b * b == a)
return (b);

return (SqertBehalfMe(a, b + 1));
}

/**
 * _sqrt_recursion - to look for the square of my number
 * @n : number to be inserted
 * Return: square or -1
 */

int _sqrt_recursion(int n)
{
return (SqertBehalfMe(n, 1));
}
