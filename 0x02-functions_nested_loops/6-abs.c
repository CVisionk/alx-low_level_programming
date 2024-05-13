#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @i: target integer.
 * Return: abs value of integer, 0 otherwise.
 * FYI: The standard library provides a similar function: abs.
 *      Run man abs to learn more.
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
return (0);
}
