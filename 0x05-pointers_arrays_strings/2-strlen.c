#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}

