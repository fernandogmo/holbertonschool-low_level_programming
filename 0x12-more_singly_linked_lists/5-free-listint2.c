#include "lists.h"  /* listint_t */
#include <stdlib.h> /* free */

/**
  * free_listint2 - frees a malloc'd listint_t list
  *		    and sets the head to NULL
  * @head: pointer to head of const listint_t
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	while (head && *head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
