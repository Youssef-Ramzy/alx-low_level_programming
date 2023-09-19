#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s);
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	for (count >= 0; count--)
		_putchar(*s + 0);
		s++;
	_putchar('\n');
}
