#include <stdio.h>

/**
 * print_diagsums - print the sum
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, a, b;

	a = 0;
	b = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			a += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			b += a[i];
		}
	}
	printf("%d, %d\n", a, b);
}
