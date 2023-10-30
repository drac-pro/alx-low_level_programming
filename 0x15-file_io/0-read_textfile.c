#include "main.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to the file name
 * @letters: number of letters it should print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buffer, letters);
	buffer[bytes] = '\0';
	printf("%s", buffer);
	free(buffer);
	close(fd);

	return (bytes);
}
