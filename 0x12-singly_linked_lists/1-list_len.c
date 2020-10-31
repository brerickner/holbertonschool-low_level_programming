#include "lists.h"
#include <stdio.h>
/**
 * list_len - const list_t *h
 * @h: pointer to node in struct list_s
 * description: function that returns the number of elements in a linked list_t
 * Return: size_t # of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++);

	return (nodes);
}
