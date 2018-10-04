#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the y power.
 * @x: integer base.
 * @y: integer power.
 * Return: integer, -1 if y < 0, else x to the y-th power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
