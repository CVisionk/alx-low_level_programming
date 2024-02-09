#include "main.h"


/**
 * *binary_to_uint -  converts a binary number to an unsigned int
 * @b: char pointing to a string of 0 and 1 chars
 *
 * Return: pointer to the memory area s
 */

void print_binary(unsigned long int n)
{
	int temp;
	static int count;

	if (n == 0 && count > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = (n & 1);
	count++;
	print_binary(n >>= 1);
	_putchar('0' + temp);
}

