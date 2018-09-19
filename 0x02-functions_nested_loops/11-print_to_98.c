#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - returns the sum of two input ints
  * @n: first input int
  *
  * Return: Null
  */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", (n > 98) ? n-- : n++);
	}
	printf("98\n");
}
