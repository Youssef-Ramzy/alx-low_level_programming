#include"main.h"

/**
 * _isalpha - function to checks for alphabetic character
 *
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
		else if (c >= 65 && c <= 90)
		return (1);
		else
		{
			return (0);
		}
}
