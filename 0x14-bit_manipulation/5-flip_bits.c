/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: num1 to compare bits
 * @m: num2 to compare bits
 * Return: total flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = 0, count = 0;

	val = n ^ m;
	while (val)
	{
		if (val & 1)
			count++;

		val >>= 1;
	}

	return (count);
}
