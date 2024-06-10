#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: character to check.
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
