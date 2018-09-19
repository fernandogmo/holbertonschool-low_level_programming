#include <stdio.h>


/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2. \n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, tmp, n;

	i = 1;
	j = 2;

	printf("%lu", i);

	for (n = 1; n < 50; n++)
	{
		printf(", %lu", j);
		tmp = i;
		i = j;
		j += tmp;
	}
	putchar('\n');

	return (0);
}
