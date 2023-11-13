#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if:
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int check, size;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open("filename", O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	check = read(file, buffer, letters);
	if (check == -1)
		return (0);
	size = write(STDOUT_FILENO, buffer, check);
	if (size == -1 || check != size)
		return (0);
	free(buffer);
	close(file);
	return (size);
}
