#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	func_printer print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (print[j].symbol)
		{
			if (format[i] == print[j].symbol[0])
			{
				print[j].print_func(args);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
