#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
