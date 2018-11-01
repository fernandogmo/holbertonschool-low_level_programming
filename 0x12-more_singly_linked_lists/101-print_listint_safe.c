#include "lists.h"  /* listint_t */
#include <stddef.h> /* ptrdif_t */

/**
  * print_listint_safe - can print listint_t linked lists with loops.
  * @head: const pointer to head of listint_t
  * Return: size_t number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, a;
	ptrdiff_t pdiff;

/*
	while (head)
	{
		do
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		} while (head - head->next > 0);
	}
*/


	for (; head; count++)
	{
		pdiff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (pdiff > 0)
			head = head->next;
		else
		{
			a = (head->next)->n;
			printf("-> [%p] %d\n", (void *)head->next, a);
			count++;
			break;
		}
	}
	return (count);
}
