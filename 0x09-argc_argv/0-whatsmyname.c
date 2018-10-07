#include <stdio.h>

/**
 * main - prints its executable name, followed by \n
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
