/**
 * int_index -  searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of the desired number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	return (-1);
}
