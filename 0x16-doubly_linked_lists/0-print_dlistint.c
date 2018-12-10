#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the value in each node of a doubly linked list
 * @h: const pointer to head of doubly linked list
 * Return: size_t number of values printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
