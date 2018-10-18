#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs arithmetic operations on two numbers
 * @argc: integer number of commandline arguments
 * @argv: string array of commandline arguments
 *
 * Return: integer result of the operation, or exit with error code on failure.
 */
int main(int argc, char **argv)
{
	int a, b;
	char op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	op = argv[2][0];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (op == '/' || op == '%'))
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
