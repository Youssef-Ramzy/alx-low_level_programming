#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet_x10 - function that will print the alphabet 10 times
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
	}	_putchar('\n');
}

