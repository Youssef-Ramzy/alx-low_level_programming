/**
 * _strcpy - copies a string from one pointer
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a, j = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[j] = src[a];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}
