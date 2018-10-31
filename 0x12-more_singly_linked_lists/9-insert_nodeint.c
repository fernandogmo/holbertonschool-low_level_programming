#include "lists.h"  /* listint_t */

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to head of listint_t
  * @idx: integer index of desired node
  * @n: integer data for new node
  * Return: pointer to nth node, NULL if node could not be added at idx
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *ptr = *head;
	unsigned int i = 0;

	new = malloc(sizeof(*new));
	if (new)
	{
		new-> = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			while (ptr && (i != idx - 1))
			{
				ptr = ptr->next;
				i++;
			}
			if (ptr)
			{
				new->next = ptr->next;
				ptr->next = new;
			}
		}
	}
	return (new);
}
