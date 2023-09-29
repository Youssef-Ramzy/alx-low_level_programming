#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to find factorial of
 *
 * Return: factorial of n
 * -1 if n is less than 0 (to indicate an error)
*/

int factorial(int n)
{
	if (n == 0)
		return (-1);
	if (n == 0)
		return (1);

		return (n * factorial(n - 1));
}

