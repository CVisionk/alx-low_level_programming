#include <stdio.h>

/**
 * main - Entry point, print 00, 01..89 skip duplicates
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
