#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 n 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int n = 1 ; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("fizzbuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');
	return (0);
}