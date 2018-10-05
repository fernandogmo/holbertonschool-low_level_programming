#include "holberton.h"

/**
 * _sqrt_recursion_aux - returns the natural square root of a number.
 * @n: integer.
 * @guess: integer, guess at sqrt(n).
 * Return: integer sqrt of n or -1 if n is not a perfect square.
 */
int _sqrt_recursion_aux(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_aux(n, ++guess));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 * Return: integer sqrt of n or -1 if n is not a perfect square.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_aux(n, 0));
}

