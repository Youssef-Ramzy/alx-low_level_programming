#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
