#include "function_pointers.h"
#include <stddef.h>
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

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
