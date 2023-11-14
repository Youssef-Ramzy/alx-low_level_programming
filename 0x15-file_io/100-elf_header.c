#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_elf_header(Elf64_Ehdr *header);
void check_elf_file(Elf64_Ehdr *header);
/**
 * main - displays the information contained in the ELF header at the
 *    start of an ELF file.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		exit(98);
	}

	check_elf_file(&header);
	print_elf_header(&header);

	close(fd);
	return (0);
}
/**
 * check_elf_file - checks if the file is an ELF file
 * @header: pointer to the ELF header struct
 * Return: void
*/
void check_elf_file(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
		header->e_ident[EI_MAG1] != ELFMAG1 ||
		header->e_ident[EI_MAG2] != ELFMAG2 ||
		header->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}
}
/**
 * print_elf_header - prints the ELF header information
 * @header: pointer to the ELF header struct
 * Return: void
*/
void print_elf_header(Elf64_Ehdr *header)
{
	printf("Magic:   ");
}
