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
	int bytes_written;
    	int nletters;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
	{
		return (-1);
	}

    if (!text_content)
		text_content = "";
    
    for (nletters = 0; text_content[nletters]; nletters++);
	bytes_written = write(fd, text_content, nletters);
	if (bytes_written <= 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
