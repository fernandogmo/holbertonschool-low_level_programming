#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from, followed by \n
 * Return: 0 on SUCCESS, 1 on FAILURE
 */
int main(void)
{
	puts(__FILE__);
	return (0);
}
