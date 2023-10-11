#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == TRUE)
			return (i);
	}
	return (-1);
}
