#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9
 *                      followed by a new line.
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
			continue;
		_putchar(number);
	}
	_putchar(10);
}
