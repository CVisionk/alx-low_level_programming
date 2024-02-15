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
	int bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

    bytes_written = write(filename, buffer, bytes_read);
}