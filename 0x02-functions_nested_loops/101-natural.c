#include <stdio.h>



/**
 * main - compute and print the sum of all multiples of 3 or 5 below 1024, \n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (!(i % 3 && i % 5))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
