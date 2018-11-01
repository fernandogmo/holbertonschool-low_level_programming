#include "lists.h"  /* listint_t */

/**
  * reverse_listint - reverses a listint_t linked list.
  * @head: pointer to head of listint_t
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *swap = NULL;

	while (*head)
	{
		swap = *head;
		*head = (*head)->next;
		swap->next = prev;
		prev = swap;
	}
	*head = prev;
	return (prev);
}
