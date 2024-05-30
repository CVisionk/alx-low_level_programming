#include "main.h"

/**
 * _isdigit - Checks if char is digit.
 * @c: char to check.
 * Return: 1 is char is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
