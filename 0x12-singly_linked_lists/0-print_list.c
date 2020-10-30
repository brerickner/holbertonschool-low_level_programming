#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - const list_t *h
 * @h: pointer to list_s node
 * description: function that prints all elemets of a list_t list.
 * Return: # of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (nodes);
}
