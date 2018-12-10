#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of doubly linked list
 * @head: double pointer to head of doubly linked list
 * @n: const integer value for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
