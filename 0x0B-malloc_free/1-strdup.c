#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * or str is NULL
*/
char *_strdup(char *str)
{
	int str_len = 0;
	int i, *ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		*ptr = malloc(str_len * sizeof(*str));

		if (ptr != NULL)
		{
			for (i = 0; i < str_len; i++)
			{
				ptr[i] = str[i];
			}
		}
		return (ptr);
		free(ptr);
	}
}
