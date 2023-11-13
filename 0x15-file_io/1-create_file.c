#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, check, size = 0;

	if (filename == NULL)
		return (0);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[size] != '\0')
			size++;
		check = write(file, text_content, size);
		if (check == -1)
			return (-1);
	}
	close(file);
	return (0);
}
