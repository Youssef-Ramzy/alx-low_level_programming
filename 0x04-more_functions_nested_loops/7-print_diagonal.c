#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (int x = 0; x <= i; x++)
			{
				_putcahr(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}

}
