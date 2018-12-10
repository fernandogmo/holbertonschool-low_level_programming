#include "lists.h"

/**
 * dlistint_len - counts nodes in doubly linked list
 * @h: const pointer to head of doubly linked list
 * Return: size_t number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t n = 0;

        while (h)
        {
                n++;
                h = h->next;
        }
        return (n);
}
