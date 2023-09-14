#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
	}
	_putchar('\n');
}
