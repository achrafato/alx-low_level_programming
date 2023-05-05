
/**
 * get_bit -   returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	while (n)
	{
		if (index == i)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
		n /= 2;
		i++;
	}

	return (-1);
}
