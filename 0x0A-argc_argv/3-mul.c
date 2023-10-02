#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", num);
	}
	return (0);
}
