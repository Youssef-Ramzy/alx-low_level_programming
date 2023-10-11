#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
