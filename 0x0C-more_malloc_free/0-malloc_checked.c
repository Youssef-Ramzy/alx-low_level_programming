#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to aloocate
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
