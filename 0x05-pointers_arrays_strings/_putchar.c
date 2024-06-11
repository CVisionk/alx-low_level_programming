#include <unistd.h>

/**
 * _putchar - Putchar implementation, writes char to stdout.
 * @c: char to write to stdout.
 * Return: 1 on success, -1 otherwise.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
