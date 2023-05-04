#include <stddef.h>

/**
 * power - measure the pow
 * @base: base
 * @exp: exponentiation
 * Return: pow.
 */
int power(int base, unsigned int exp)
{
	int i, result = 1;

	for (i = 0; i < (int)exp; i++)
		result *= base;
	return (result);
}

/**
 * _srtlen - measure the length of string
 * @c: pointer to char
 * Return: length of string.
 */
int _srtlen(char *c)
{
	int  i = 0;

	while (c[i] != '\0')
	{
		if (c[i] != '0' && c[i] != '1')
			return (-1);
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - convert from binary to decimal
 * @b: pointer to char
 * Return: integer or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int  i;
	int pown = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	i = _srtlen((char *) b);
	if (i == -1)
		return (0);

	while (b[--i] != '\0')
	{
		num += (b[i] - '0') * power(2, pown++);
	}

	return (num);
}
