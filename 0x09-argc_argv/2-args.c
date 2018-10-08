#include <stdio.h>

/**
 * main - prints the all argument to it, one per line
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
