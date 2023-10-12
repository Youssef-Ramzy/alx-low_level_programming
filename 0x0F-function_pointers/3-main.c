#include "3-calc.h"
#include <stdio.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 * If the number of arguments is wrong, print Error, followed by a new line,
 * and exit with the status 98
 * If the operator is none of the above, print Error, followed by a new line,
 * and exit with the status 99
 * If the user tries to divide (/ or %) by 0, print Error, followed by a new
 * line, and exit with the status 100
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
