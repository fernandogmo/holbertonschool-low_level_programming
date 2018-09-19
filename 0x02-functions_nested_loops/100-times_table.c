#include "holberton.h"

/**
  * print_times_table - prints the n times table, starting at 0.
  *
  * @n: input integer
  *
  * Returns - void
  */
void print_times_table(int n)
{
	int a, b, ab, huns, tens, ones;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			if (n == 0)
			{
				_putchar('0');
				_putchar('\n');
				break;
			}
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar(0 + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					ab = a * b;
					huns = (ab > 99) ? ab / 100 : -16;
					tens = (ab > 99) ? ab / 10  % 10 : (ab > 9) ? ab / 10 : -16;
					ones = ab % 10;

					_putchar(huns + '0'); /* -16 + '0' is a SPACE */
					_putchar(tens + '0'); /* -16 + '0' is a SPACE */
					_putchar(ones + '0');
					if (b == n)
						break;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
