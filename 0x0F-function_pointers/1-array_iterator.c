#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
