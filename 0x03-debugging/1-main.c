#include <stdio.h>

/**
 * main - Entry point, avoids infinite loop on main.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/*
	* while (i < 10)
	* {
	* putchar(i);
	* }
	*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
