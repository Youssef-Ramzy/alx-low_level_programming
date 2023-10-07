#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = old_ptr;
	int i;
	int n = new_size;

	if (old_ptr == NULL)
	{
		new_ptr = malloc(n);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(old_ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (old_ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(old_ptr);
	return (new_ptr);
}
