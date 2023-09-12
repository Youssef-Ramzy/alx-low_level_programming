#include "main.h"

/**
 * print_alphabet_x10 - this prints letters
 *
 * Description: print_alphabet_x10
 *
 * Return: Always 0 (Success)
*/


void print_alphabet_x10(void)
{
	int ch = 'a';
	int line = 0;

	while (line < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		line++;
		_putchar('\n');
		ch = 'a';
	}
}

