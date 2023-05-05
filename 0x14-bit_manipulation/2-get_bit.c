
/**
 * get_bit -   returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (index == i)
			return (n % 2);
		n /= 2;
		i++;
	}

	return (-1);
}
