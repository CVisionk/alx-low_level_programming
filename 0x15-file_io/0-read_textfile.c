#include "main.h"
/**
 * struct read_textfile -  reads a text file and prints it
 * @filename: name of file
 * @letters:  number of letters it should read and print
 *
 * return: written_bytes
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_written == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_written);
}
