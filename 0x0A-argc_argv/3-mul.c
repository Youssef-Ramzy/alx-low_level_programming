#include <stdio.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num *= atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	
	return (0);
}
