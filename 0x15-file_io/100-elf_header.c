#include "main.h"
/**
 * check_if_elf - check if the file is an ELF file
 * @e_ident: the ELF header
 * Return: nothing
*/
void check_if_elf(unsigned char *e_ident)
{
	int index = 0;
	char *error_msg = "Error: Not an ELF file\n";

	while (index < 4)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F') /*0x7F is 127 in ASCII*/
		{
			write(STDERR_FILENO, error_msg, strlen(error_msg));
			exit(98);
		}
		index++;
	}
}
/**
 * close_file - close the file
 * @elf_file: the file descriptor
 * Return: nothing
*/
void close_file(int elf_file)
{
	if (close(elf_file) == -1)
	{
		char *error_msg = "Error: Can't close fd\n";

		write(STDERR_FILENO, error_msg, strlen(error_msg));
		exit(98);
	}
}
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf;
	int elf_file, read_file;

	elf_file = open(argv[1], O_RDONLY);
	if (elf_file == -1)
	{
		char *error_msg = "Error: Can't read file\n";

		write(STDERR_FILENO, error_msg, strlen(error_msg));
		exit(98);
	}

	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		close_file(elf_file);
		free(elf);
		char *error_msg = "Error: Can't read file\n";

		write(STDERR_FILENO, error_msg, strlen(error_msg));
		exit(98);
	}

	read_file = read(elf_file, elf, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(elf);
		close_file(elf_file);
		char *error_msg = "Error: No such file\n";

		write(STDERR_FILENO, error_msg, strlen(error_msg));
		exit(98);
	}
	check_if_elf(elf->e_ident);
	free(elf);
	close_file(elf_file);
	return (0);
}
