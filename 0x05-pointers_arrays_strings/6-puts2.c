#include "main.h"

/**
 * puts2 -Prints one char out of 2 of a string.
 * followed by a new line
 * @s: string to print the chars from
 */
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(s[a]);
	}
	_putchar('\n');
}
