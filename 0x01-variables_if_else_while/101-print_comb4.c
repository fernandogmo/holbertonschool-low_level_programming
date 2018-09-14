#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int huns, tens, ones;

	for (huns = '0'; huns <= '7'; huns++)
	{
		for (tens = huns + 1; tens <= '8'; tens++)
		{
			for (ones = tens + 1; ones <= '9'; ones++)
			{
				putchar(huns);
				putchar(tens);
				putchar(ones);

				if (huns != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
