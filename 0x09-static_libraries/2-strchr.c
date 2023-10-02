/**
 * _strchr - function locates a char in a string
 *
 * @s: pointer to the array
 * @c: the char that we want to finde
 *
 * Return: locate of the char or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
