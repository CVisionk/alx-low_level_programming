#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
