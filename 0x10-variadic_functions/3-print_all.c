#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
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
/**
 * print_char - prints a character
 * @arg: character to be printed
 * Return: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - prints an integer
 * @arg: integer to be printed
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_float - prints a float
 * @arg: float to be printed
 * Return: void
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string - prints a string
 * @arg: string to be printed
 * Return: void
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
