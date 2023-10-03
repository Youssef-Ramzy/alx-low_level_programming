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
	char *str;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str[i] = str[i];

	str[len] = '\0';

	return (str);
}
