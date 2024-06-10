#include "main.h"

/**
 * largest_number - Returns largest number from three integers.
 * @a: first integer to compare
 * @b: Second integer
 * @c: Third integer
 * Return: largest integer from a, b, c.
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else
		largest = c;
	return (largest);
}
