#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments passed to the program
 * @argv: pointers to the arguments passed
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
int fd_from, fd_to, bytes_read = 1024, bytes_written;
char buffer[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from), exit(99);
}
while (bytes_read == 1024)
{
	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written < bytes_read)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (close(fd_from) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	exit(100);
}
if (close(fd_to) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
}
	return (0);
}
