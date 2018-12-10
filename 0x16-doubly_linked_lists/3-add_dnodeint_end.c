#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: double pointer to head of doubly linked list
 * @n: const integer value for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *last = NULL, *new = NULL;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	for (last = *head; last && last->next;)
		last = last->next;

	new->n = n;
	new->prev = last;
	new->next = NULL;

	if (last)
		last->next = new;
	else
		*head = new;

        return (new);
}
