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
		tens = huns + 1;
		while (tens <= '8')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				putchar(huns);
				putchar(tens);
				putchar(ones++);

				if (huns != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			tens++;
		}
	}
	putchar('\n');

	return (0);
}
