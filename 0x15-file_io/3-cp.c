#include "main.h"

#define BUFFER_SIZE 1024
/**
 * close_file -  closes file.
 * @fd: file descriptor.
 * @status: status.
 * return: void
 *
 */

void close_file(int fd, int status) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(status);
    }
}

/**
 * main -  checks code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t n_read, n_written;
    char buf[BUFFER_SIZE];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
    }

    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1) {
        close_file(fd_from, 100);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
    }

    while ((n_read = read(fd_from, buf, BUFFER_SIZE)) > 0) {
        n_written = write(fd_to, buf, n_read);
        if (n_written == -1 || n_written != n_read) {
            close_file(fd_from, 100);
            close_file(fd_to, 100);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		    exit(99);
        }
    }

    if (n_read == -1) {
        close_file(fd_from, 100);
        close_file(fd_to, 100);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
    }

    close_file(fd_from, 100);
    close_file(fd_to, 100);

    return 0;
}