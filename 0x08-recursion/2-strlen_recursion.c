#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}
