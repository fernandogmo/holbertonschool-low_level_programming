#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 *	  amount of cents (0 for negative cents), prints `Error` if
 *	  more than 1 argument.
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS, 1 if more than 1 argument.
 */
int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, twopence;

	if (argc < 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		puts("0");
		return (0);
	}

	for (quarters = 0; cents >= 25; quarters++)
		cents -= 25;

	for (dimes = 0; cents >= 10; dimes++)
		cents -= 10;

	for (nickels = 0; cents >= 5; nickels++)
		cents -= 5;

	for (twopence = 0; cents >= 2; twopence++)
		cents -= 2;

	printf("%d\n", quarters + nickels + dimes + twopence + cents);

	return (0);
}
