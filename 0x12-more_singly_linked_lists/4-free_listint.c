#include "lists.h"

/**
  * free_listint - frees a malloc'd listint_t list
  * @head: pointer to head of const listint_t
  */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
