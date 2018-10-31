#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to head of const listint_t
  * @n: int value for new node
  * Return: pointer to the newly added node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *last = *head;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!*head)
			*head = new;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (new);
}
