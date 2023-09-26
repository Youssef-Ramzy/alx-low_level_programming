#include "main.h"

/**
 * _atoi - Convert a string to an integer
 *
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int m = 1;
	int is = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			m *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			is = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}

		if (isi == 1)
		{
			break;
		}

		i++;
	}

	ni *= m;
	return (ni);
}
