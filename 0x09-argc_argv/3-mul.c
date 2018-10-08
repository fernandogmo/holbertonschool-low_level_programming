#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integer arguments, prints
 *	  `Error` if does not receive two arguments.
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS, 1 if not two arguments
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
