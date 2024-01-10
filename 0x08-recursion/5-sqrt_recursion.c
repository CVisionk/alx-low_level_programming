#include "header.h"
int _root_sqrt(int raiz, int cont);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: first value
 *
 * Return: Return solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}

/**
 * _root_sqrt - calculate the square root
 *@sqrt: value to calc the square root
 *@cont: variable to cont
 *
 * Return: number with the solution
 */
int _root_sqrt(int sqrt, int cont)
{
	if (cont * cont == sqrt)
	{
		return (cont);
	}
	else if (cont * cont > sqrt)
	{
	return (-1);
	}
	else
	{
		return (_root_sqrt(sqrt, cont + 1));
	}
}
