#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive integer arguments, prints
 *	  `Error` if any argument has non-digit symbols.
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS, 1 on any non-positive integer arguments
 */
int main(int argc, char *argv[])
{
	long i, val, sum;
	char *endptr;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		val = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			puts("Error");
			return (1);
		}
		sum += val;
	}
	printf("%ld\n", sum);

	return (0);
}
