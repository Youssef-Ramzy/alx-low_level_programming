#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int t;
	int i;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + 48);

			}
			else
				_putchar(i % 10 + 48);

		}
		_putchar('\n');
	}
}
