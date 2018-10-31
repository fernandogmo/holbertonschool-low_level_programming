#include "lists.h"  /* listint_t */

/**
  * sum_listint - returns the sum of all the data of a listint_t linked list
  * @head: pointer to head of const listint_t
  * Return: integer sum of node data, 0 if head node is NULL
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
