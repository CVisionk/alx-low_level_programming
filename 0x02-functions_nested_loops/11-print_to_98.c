#include "main.h"

/**
 * print_to_98 -  Prints all natural numbers from n to 98,
 *                followed by a new line.
 * @n: start index.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	} else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
