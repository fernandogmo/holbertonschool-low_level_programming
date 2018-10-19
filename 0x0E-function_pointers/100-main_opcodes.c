#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes for main
 * @argc: int argument count
 * @argv: array of string arguments
 * Return: 0 on success, 1 if argc != 2,
 *	   2 if argument is negative.
 */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
		printf("%hhx ", *((char *)main + i));

	printf("\n");

	return (0);
}
