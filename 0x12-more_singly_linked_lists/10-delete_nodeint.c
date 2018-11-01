#include "lists.h"  /* listint_t */

/**
  * delete_nodeint_at_index - deletes the node at a given position.
  * @head: pointer to head of listint_t
  * @index: integer index of node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *del = NULL;
	unsigned int i = 0;
	int ret = -1;

	if (*head && index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ret = 1;
	}
	else if (*head)
	{
		while (ptr && (++i != index))
			ptr = ptr->next;

		if (ptr) /* Delete if position found */
		{
			del = ptr->next;
			ptr->next = (ptr->next)->next;
			free(del);
			ret = 1;
		}
	}
	return (ret);
}
