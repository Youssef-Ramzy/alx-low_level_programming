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
	int i = 0;

	while (ch <= 'z')
	{
		while (i < 10)
		{
			putchar(ch);
			i++;
		}
		ch++;
	}
	putchar('\n');
}

