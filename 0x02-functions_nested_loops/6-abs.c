#include "holberton.h"


/**
 * _abs - returns absolute value of input integer
 *
 * @n: input integer
 *
 * Return: Always positive int
 */
int _abs(int n)
{
	return (n < 0 ? n * -1 : n);
}
