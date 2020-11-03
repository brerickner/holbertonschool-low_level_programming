#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - const listint_t *h
 * @h: pointer to node in listint_h
 * definition: function that prints all elements of a listint_t
 * Return: # of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
	{
		printf("%i\n", h->n);
	}
	return (nodes);
}
