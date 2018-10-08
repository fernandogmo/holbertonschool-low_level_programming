#include <stdio.h>

/**
 * main - prints the numebr of arguments passed to it, followed by \n
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
