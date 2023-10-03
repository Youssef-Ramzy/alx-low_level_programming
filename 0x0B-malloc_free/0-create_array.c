#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));

	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
