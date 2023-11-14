#include "main.h"
/**
 * handle_error - handles errors and exits program
 * @error_message: error message to print
 * @file_descriptor: file descriptor to close
 */
void handle_error(const char *error_message, int file_descriptor)
{
	if (file_descriptor != -1)
	{
		close(file_descriptor);
	}
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(98);
}
/**
 * main - program entry point
 * @argument_count: number of arguments passed to program
 * @argument_values: array of pointers to argument strings
 * Return: 0 on success, 98 on failure
*/
int main(int __attribute__((__unused__)) argument_count,
	 char *argument_values[])
{
	Elf64_Ehdr elf_header;
	int elf_file_descriptor;

	elf_file_descriptor = open(argument_values[1], O_RDONLY);
	if (elf_file_descriptor == -1)
	{
		handle_error("Error: Can't read file", -1);
	}

	if (read(elf_file_descriptor, &elf_header, sizeof(Elf64_Ehdr))
		!= sizeof(Elf64_Ehdr))
	{
		handle_error("Error: Can't read file", elf_file_descriptor);
	}

	check_if_elf(elf_header.e_ident);
	printf("ELF Header:\n");
	print_magic(elf_header.e_ident);
	print_class(elf_header.e_ident);
	print_data(elf_header.e_ident);
	print_version(elf_header.e_ident);
	print_osabi(elf_header.e_ident);
	print_abi(elf_header.e_ident);
	print_type(elf_header.e_type, elf_header.e_ident);
	print_entry(elf_header.e_entry, elf_header.e_ident);

	if (close(elf_file_descriptor) == -1)
	{
		handle_error("Error: Can't close fd", elf_file_descriptor);
	}

	return (0);
}
