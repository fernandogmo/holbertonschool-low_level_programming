#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at nth position in dlistint
 * @h: double pointer to head of doubly linked list
 * @idx: uint index for new node
 * @n: integer value for new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *node = NULL;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	while (node && --idx && node->next)
		node = node->next;

	if (idx)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = node;
	new->next = node->next;

	if (node->next)
		node->next->prev = new;
	node->next = new;

	return (new);
}
