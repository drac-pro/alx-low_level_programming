#include "main.h"
#include <stdio.h>

void handle_error(const char *message, char *file_name, int err_code);
void handle_close(int fd);
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
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		handle_close(fd_from);
		handle_error("Error: Error: Can't write to", argv[2], 99);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
		handle_close(fd_from);
		handle_close(fd_to);
		handle_error("Error: Error: Can't write to", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		handle_close(fd_from);
		handle_close(fd_to);
		handle_error("Error: Can't read from file", argv[1], 98);
	}
	handle_close(fd_from);
	handle_close(fd_to);
	return (0);
}

/**
 * handle_error - handles read and write errors
 *
 * @message: ponter to error message
 * @file_name: name of the file
 * @err_code: error exit code
 *
 * Return: void
 */
void handle_error(const char *message, char *file_name, int err_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
	exit(err_code);
}
/**
 * handle_close - closes a file descriptor and handle any error
 *
 * @fd: file descriptor
 *
 * Return: void
 */
void handle_close(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
