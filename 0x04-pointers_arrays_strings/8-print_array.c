#include "holberton.h"
#include <stdio.h>

/**
 * print_array - takes a pointer to an array of ints and prints n elements
 *               of an array of integers, followed by a new line.
 * @a: pointer to 1st element of an int array.
 * @n: integer number of elements to be printed from the int array a.
 *
 */
void print_array(int *a, int n)
{
	while (n-- > 0)
	{
		printf("%d", *a++);
		if (n != 0)
			printf(", ");
	}
	putchar('\n');
}
