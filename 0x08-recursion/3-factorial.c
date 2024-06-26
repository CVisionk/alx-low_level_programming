#include "header.h"

/**
 * factorial - function that  returns the factorial of a given number.
 * @n: given number.
 * Return: Return solution
 */
int factorial(int n)
{
	if (n <  0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
