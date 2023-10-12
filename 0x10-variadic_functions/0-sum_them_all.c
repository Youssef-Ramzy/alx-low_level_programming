#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int s = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
