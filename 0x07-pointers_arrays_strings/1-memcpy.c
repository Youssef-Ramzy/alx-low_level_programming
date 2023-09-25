/**
 * _memcpy - function copies memory area
 *
 * @dest: where will we past
 * @src: where will we copy
 * @n: n unmber of @src
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
