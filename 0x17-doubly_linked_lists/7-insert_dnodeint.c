#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *insert_dnodeint_at_index - dlistint_t **h, unsigned int idx, int n
 * @h: pointer to node in dlistint_h
 * @idx: index to insert node
 * @n: value of number in node
 * definition: function that inserts a new node at a given position
 * Return: address of new node. Else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = *h, *inNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		copy = copy->next;
		if (!copy)
			return (NULL);
	}

	if (!copy->next)
		return (add_dnodeint_end(h, n));

	inNode = malloc(sizeof(dlistint_t));
	if (!inNode)
		return (NULL);

	inNode->n = n;
	inNode->next = copy->next;
	inNode->prev = copy;
	copy->next->prev = inNode;
	copy->next = inNode;

	return (inNode);
}
