#include "main.h"
#define MAX 1024

void check_argc(int argc);
int open_file1(char *filename);
int open_file2(char *filename);
void copy_files(int file1, int file2, char *file1_name, char *file2_name);
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file1, file2;

	check_argc(argc);
	file1 = open_file1(argv[1]);
	file2 = open_file2(argv[2]);
	copy_files(file1, file2, argv[1], argv[2]);

	return (0);
}
/**
 * check_argc - checks if the number of arguments is correct
 * @argc: number of arguments
 * Return: void
*/
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * open_file1 - opens the first file
 * @filename: name of the file
 * Return: file descriptor
*/
int open_file1(char *filename)
{
	int file = open(filename, O_RDONLY);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (file);
}
/**
 * open_file2 - opens the second file
 * @filename: name of the file
 * Return: file descriptor
*/
int open_file2(char *filename)
{
	int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (file);
}
/**
 * copy_files - copies the content of a file to another file
 * @file1: file descriptor of the first file
 * @file2: file descriptor of the second file
 * @file1_name: name of the first file
 * @file2_name: name of the second file
 * Return: void
*/
void copy_files(int file1, int file2, char *file1_name, char *file2_name)
{
	int read_count, write_count;
	char buffer[MAX];

	while ((read_count = read(file1, buffer, MAX)) > 0)
	{
		write_count = write(file2, buffer, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2_name);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1_name);
		exit(98);
	}

	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}

	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}
