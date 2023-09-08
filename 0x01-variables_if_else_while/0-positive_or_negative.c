#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print value of n satus; positive, negative or zero
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n > 0)
		printf("%i is positive ", n);
	else if (n < 0)
	printf("%i is negative ", n);
	else
	printf("%i is zero ", n);

	return (0);
}
