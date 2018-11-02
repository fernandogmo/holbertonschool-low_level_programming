#include "holberton.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: long uint decimal
  */
void print_binary(unsigned long int n)
{
	int begin = 0, ul_bits = sizeof(n) * 8;
	unsigned long int bit  = 1UL << (ul_bits - 1);

	while (bit)
	{
		begin = (bit & n) ? 1 : begin;
		if (begin)
			(bit & n) ? _putchar('1') : _putchar('0');
		bit >>= 1;
	}
	if (n == 0)
		_putchar('0');
}

