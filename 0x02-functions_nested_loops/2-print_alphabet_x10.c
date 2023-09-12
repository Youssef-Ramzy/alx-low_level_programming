#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints_alphabet_x10 using putchar prototype
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
			putchar(ch);
			ch++;
		}
		line++;
	}
	putchar('\n');
}

