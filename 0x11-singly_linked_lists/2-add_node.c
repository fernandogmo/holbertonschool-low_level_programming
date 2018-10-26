#include "lists.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */


/**
 * add_node - adds a new node at the beginning of
 *	      a list_t linked list
 * @head: pointer to head of list_t linked list
 * @str:  const string for new node
 * Return: pointer to new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->str  = strdup(str);
		new->len  = len;
		new->next = *head;
		*head = new;
	}
	return (new);
}

