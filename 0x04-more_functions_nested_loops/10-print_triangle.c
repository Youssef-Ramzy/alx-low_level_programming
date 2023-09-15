#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int r = 1; r <= size; r++)
		{
			for (int c = 1; c <= size - r; c++)
			{
				_putchar(' ');
			}
			for (int k = 1; k <= r; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
