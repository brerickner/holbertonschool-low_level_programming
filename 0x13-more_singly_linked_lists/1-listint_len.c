#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - const listint_t *h
 * @h: pointer to node in listint_h
 * definition: prints all elements of a listint_t
 * Return: # of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
		;

	return (nodes);
}
