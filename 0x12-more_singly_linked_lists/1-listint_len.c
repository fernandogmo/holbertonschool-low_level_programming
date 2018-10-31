#include "lists.h"

/**
  * listint_len - returns the number of elements of a listint_t list
  * h - pointer to head of const listint_t
  * Return: the number of nodes in h
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* number of nodes printed */

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}