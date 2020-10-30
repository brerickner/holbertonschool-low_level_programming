#include "lists.h"
#include <stdlib.h>

/**
 * size_t print_list - const list_t *h
 * @h: pointer to list_s node
 * description: function that prints all elemets of a list_t list.
 * Return: # of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes;

	if (h->str == NULL)
		printf("[%i] %s", 0, "(nil)");
	else
		while (h->next != NULL)
		{
			nodes = printf("[%u] %s\n",h->len, h->str);
			h = h->next;
		}
	return (nodes);
}
