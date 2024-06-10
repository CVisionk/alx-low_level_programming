#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * Return: Returns the value of the last digit.
 * @n: target digit.
 */

int print_last_digit(int n)
{
	int lastdigit = abs(n % 10);

	_putchar (lastdigit + '0');
	return (lastdigit);
}
