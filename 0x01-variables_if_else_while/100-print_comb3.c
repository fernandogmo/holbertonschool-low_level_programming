#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = '0'; tens <= '8'; tens++)
	{
		ones = tens + 1;
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones++);

			if (tens != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
