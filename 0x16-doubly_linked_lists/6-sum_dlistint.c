#include "lists.h"

/**
 * sum_dlistint - sums all data of a dlistint linked list
 * @head: pointer to head of doubly linked list
 * Return: integer sum of all dat in dlistint linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
