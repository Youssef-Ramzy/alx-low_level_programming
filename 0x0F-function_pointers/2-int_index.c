/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of first element for which cmp does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool j;

	if (array != NULL && cmp != NULL && size > 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == TRUE)
				return (i);
		}
	}
	return (-1);
}
