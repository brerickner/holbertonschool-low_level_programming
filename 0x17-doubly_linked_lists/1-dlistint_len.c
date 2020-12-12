#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - const dlistint_t *h
 * @h: pointer to node in listint_h
 * definition: function that checks length of dlistint_t
 * Return: # of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
		;
	return (nodes);
}
