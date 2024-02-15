#include "main.h"

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
	int fd;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";


	rwr = write(fd, text_content, strlen(text_content));

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
