#include "main.h"

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
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]), exit(98);
	rd = read(fd, buf, ELF_DATA);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	sz = write(STDOUT_FILENO, buf, rd);
	if (sz == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to STDOUT\n"), exit(98);
	close(fd);
	return (0);
}
