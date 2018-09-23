#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143, then \n
 *
 * * Return: Always 0
 */
int main(void)
{
	unsigned long n = 612852475143; /* = 3 * 4019 * 50829599 */
	int i;

	for (i = 2; i < sqrt(n); i++)
		while (n % i == 0)
			n /= i;
	printf("%lu\n", n);

	return (0);
}
