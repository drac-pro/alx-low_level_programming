#include "main.h"
#include <stdio.h>
#include <string.h>
#include <elf.h>

void read_elf_header(const char *elf_file);
/**
 * main - display info contained in the header of an elf file
 *
 * @argc: number of arguments passed to the program
 * @argv: pointers to the arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	read_elf_header(argv[1]);
	return (0);
}
/**
 * read_elf_header - display info contained in the header of an elf file
 *
 * @elf_file: pointer to elf file name
 *
 * Return: void
 */
void read_elf_header(const char *elf_file)
{
	Elf64_Ehdr header;
	int fd, bytes_read;

	fd = open(elf_file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot open elf_file %s\n", elf_file);
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: cannot read header of %s\n", elf_file);
		close(fd);
		exit(98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not a valid elf file %s\n", elf_file);
		close(fd);
		exit(98);
	}
	printf("Magic: %02x %02x %02x %02x\n", header.e_ident[0], header.e_ident[1],
			header.e_ident[2], header.e_ident[3]);
	printf("Class: %d-bit\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
	printf("Data: %s-endian\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ?
			"Little" : "Big");
	printf("Version: %d\n", header.e_version);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: 0x%x\n", header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
	close(fd);
}
