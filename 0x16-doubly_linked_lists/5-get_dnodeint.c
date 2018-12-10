#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of doubly linked list
 * @head: pointer to head of doubly linked list
 * @index: uint index of node
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (node && index--)
		node = node->next;

	return (node);
}
