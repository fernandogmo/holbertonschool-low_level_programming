#include <stdio.h>


/**
 * main - print sum of the even-valued Fibonacci numbers, less than 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i, j, tmp, sum;

	i = 1;
	j = 2;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		tmp = i;
		i = j;
		j += tmp;
	}
	printf("%u\n", sum);

	return (0);
}
