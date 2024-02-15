#include "main.h"
/**
 * struct read_textfile -  reads a text file and prints it
 * @filename: name of file
 * @letters:  number of letters it should read and print
 *
 * return: written_bytes
 *
 */

int append_text_to_file(const char *filename, char *text_content){
    int fd;

	if (!filename)
		return (-1);
	if(!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) == -1){
		close(fd);
		return(-1);
	}

	close(fd);
    return (1);
}
