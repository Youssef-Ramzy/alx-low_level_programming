#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array, NULL if malloc fails
*/

int *array_range(int min, int max)
{
	int *arry;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - mim + 1;
	arry = malloc(size * sizeof(int));
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arry[i] = min + i;
	}
	return (arry);
}
