#include "main.h"


/**
 * *binary_to_uint -  converts a binary number to an unsigned int
 * @b: char pointing to a string of 0 and 1 chars
 *
 * Return: pointer to the memory area s
 */

unsigned int binary_to_uint(const char *b)
{
	 unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) + (*b - '0');
		b++;
	}
	return (num);
}
