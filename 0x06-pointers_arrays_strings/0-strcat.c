/**
 * _strcat - function that concatenates
 * two strings.
 *
 * @dest: pointer to array
 * @src: pointer to array
 *
 * Return: pointer to array @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] ; j++)
	{
		dest[i++] = src[j];
	}

	return (dest);
}
