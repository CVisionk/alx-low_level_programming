#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: character of sign to print
 * Return: Returns 1 and prints + if n is greater than zero,
 *         Returns 0 and prints 0 if n is zero
 *         Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
