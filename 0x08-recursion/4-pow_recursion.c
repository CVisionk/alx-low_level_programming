#include "header.h"

/**
 * _pow_recursion - function that returns the value of
 *                  x raised to the power y.
 * @x: integer to raise to y.
 * @y: power to raise to.
 * Return: Return solution
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		--y;
	return (_pow_recursion(x, y) * x);
}
