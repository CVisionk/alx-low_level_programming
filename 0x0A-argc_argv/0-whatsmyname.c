#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints it's name, followed by newline.
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[1]);
	return (0);
}
