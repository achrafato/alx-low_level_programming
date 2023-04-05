/**
 * check - Checks whether n is a prime number.
 * @n : number to be inserted
 * @a : multiples of the number n
 * Return: 1 or 0
 */

int check(int n, int a)
{
if (a == 1)
return (1);

if (n == 1)
return (0);

if (n % a == 0)
return (0);

return (check(n, a - 1));
}

/**
 * is_prime_number - Checks whether n is a prime number.
 * @n : number to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n < 0)
n *= -1;
return (check(n, n - 1));
}
