#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(48);
		for (m = 1; m <= 9; ++m)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48); /*get the first digit*/

			_putchar((p % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}

