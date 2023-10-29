#include <stdlib.h>
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number to be modified
 * @index: index of bit to be set to 0
 * Return: 1 if successful, -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask <<= index;
	*n = (*n & ~mask);
	return (1);
}
