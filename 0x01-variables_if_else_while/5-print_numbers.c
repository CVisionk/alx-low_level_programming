#include <stdio.h>

/**
 * main - Entry point, prints numbers 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
