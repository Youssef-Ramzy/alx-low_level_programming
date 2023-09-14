#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	for (int i = 0; i >= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
