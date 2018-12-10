#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: double pointer to head of doubly linked list
 * @index: uint index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL;

	if (head)
	{
		ptr = *head;
		while (ptr && index--)
			ptr = ptr->next;
		if (!index && ptr)
		{
			if (ptr->prev)
				ptr->prev->next = ptr->next;
			else
				*head = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
	}
	return (-1);
}
