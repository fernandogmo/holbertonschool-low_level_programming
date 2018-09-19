#include "holberton.h"

/**
  * times_table - prints the 9 times table, starting at 0.
  *
  * Returns - void
  */

void times_table(void)
{
	int a, b, ab, tens, ones;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			ab = a * b;
			tens = ab > 9 ? ab / 10 : -16;
			ones = ab % 10;

			_putchar(tens + '0'); /* -16 + '0' is a SPACE */
			_putchar(ones + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
