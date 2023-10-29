#include <stdlib.h>
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	while (mask < n)
	{
		mask <<= 1;
		i++;
	}
	while (i >= 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
		i--;
	}
}
