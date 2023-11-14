#include "main.h"

#define BUF_SIZE 64

void write_error(char *msg);
void check_elf_file(char *buf);
void print_elf_header(char *buf);

/**
 * main - displays the information contained in the ELF header at the start of
 *        an ELF file.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, rd;
	char buf[ELF_DATA];
	ssize_t sz;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, buf, ELF_DATA);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sz = write(STDOUT_FILENO, buf, rd);
	if (sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to STDOUT\n");
		exit(98);
	}
	close(fd);
	return (0);
}
/**
 * write_error - writes an error message to STDERR
 * @msg: the error message
 * Return: void
*/
void write_error(char *msg)
{
	write(STDERR_FILENO, msg, BUF_SIZE);
}
/**
 * check_elf_file - checks if the file is an ELF file
 * @buf: buffer containing the first bytes of the file
 * Return: void
*/
void check_elf_file(char *buf)
{
	if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
	{
		write_error("Error: Not an ELF file\n");
		exit(98);
	}
}
/**
 * print_elf_header - prints the ELF header
 * @buf: buffer containing the first bytes of the file
 * Return: void
*/
void print_elf_header(char *buf)
{
	write(STDOUT_FILENO, "Magic:   ", 9);
}
