#include <stdio.h>

/**
 * main - Entry point for program, print all ints followed by ', '
 *        using putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
