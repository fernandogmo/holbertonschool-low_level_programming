#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to head of const listint_t
  * @n: int value for new node
  * Return: pointer to the newly added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
