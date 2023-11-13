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
	size_t size;
	int file;
	char buffer[letters];

	if (filename == NULL)
		return (0);
	file = open("filename", O_RDONLY);
	for (int i = 0; i < letters; i++)
	{
		read(filename, buffer[i], letters);
		size += write(0, buffer[i], 1);
	}

	return (size);
}
