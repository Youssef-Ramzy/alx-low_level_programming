/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
*/

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack++;
	}
	return ('\0');
}
