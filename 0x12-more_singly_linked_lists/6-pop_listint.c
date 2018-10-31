#include "lists.h"  /* listint_t */
#include <stdlib.h> /* free */

/**
  * pop_listint - deletes and frees the head node of
  *		  a malloc'd listint_t list.
  * @head: pointer to head of const listint_t
  * Return: data integer for head node, 0 if head node NULL
  */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr = NULL;

	if (head && *head)
	{
		n = (*head)->n;
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	return (n);
}
