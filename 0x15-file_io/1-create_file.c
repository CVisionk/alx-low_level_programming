#include "main.h"
#include <string.h>
/**
 * struct int create_file -  creates a file.
 * @filename: name of file to create
 * @letters:  NULL terminated string to write to the file
 *
 * return: written_bytes
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written <= 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
