#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to the file name to be created
 * @text_content: text to be written to new file
 *
 * Return: 1 (success) or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
