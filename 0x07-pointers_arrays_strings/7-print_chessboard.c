#include "main.h"

/**
 * print_chessboard - print the bord
 *
 * @a: input pointer
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int num1, num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 64)
	{
		if (num1 % 8 == 0 && num1 != 0)
		{
			num2 = num1;
			_putchar('\n');
		}

		_putchar(a[num1 / 8][num1 - num2]);
		num1++;
	}
	_putchar('\n');
}
