#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check
 * @index: index to check
 * Return: value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);
	mask = 1 << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
