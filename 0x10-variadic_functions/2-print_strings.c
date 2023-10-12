#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		char *str = va_arg(args, char);

		if (str == NULL)
			printf("nil");
		if (separator && i != n - 1)
			printf("%s%s", va_arg(args, char));
		else
		printf("%s", va_arg(args, char));
	}
	va_end(args);
	printf("\n");
}
