#include "main.h"


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
	int i = 0;
	int j, r;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
			r = i * j;
		}
			if (j == 0)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
