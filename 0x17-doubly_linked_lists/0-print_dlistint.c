#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - const dlistint_t *h
 * @h: pointer to head node in dlistint_t
 * definition: function that prints all elements of a dlistint_t
 * Return: # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
		printf("%i\n", h->n);
	return (nodes);
}
