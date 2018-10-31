#include "lists.h"  /* listint_t */

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: pointer to head of const listint_t
  * @index: integer index of desired node
  * Return: pointer to nth node, NULL if node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && (i != index))
	{
		head = head->next;
		i++;
	}
	return (head);
}
