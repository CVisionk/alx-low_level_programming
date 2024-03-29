#include "header.h"
int calculo_primo(int num_, int inf);

/**
 * is_prime_number - function that  returns 1 if the input integer is a prime.
 *@n: first value
 *
 * Return: Return solution
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (calculo_primo(n, a));
}

/**
 * calculo_primo - function that returns 1 if the input integer is a prime.
 *@num_: first value
 *@num2: second value
 *
 * Return: Return solution
 */
int calculo_primo(int num_, int num2)
{
	if (num_ / 2 < inf)
		return (1);
	if (num_ % inf == 0)
		return (0);
	return (calculo_primo(num_, num2 + 1));
}
