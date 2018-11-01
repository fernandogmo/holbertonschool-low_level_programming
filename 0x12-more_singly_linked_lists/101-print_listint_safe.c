#include "lists.h"  /* listint_t */

/**
  * print_listint_safe - can print listint_t linked lists with loops.
  * @head: const pointer to head of listint_t
  * Return: size_t number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	while (head && (head - head->next > 0))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
		count++;
	}
	return (count);
}
