#include "main.h"

/**
 * _isupper - Checks if char is uppercase.
 * @c: char to check.
 * Return: 1 if is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
