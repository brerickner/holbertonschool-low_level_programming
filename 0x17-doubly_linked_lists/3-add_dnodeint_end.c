#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_dnodeint_end - dlistint_t **head, const int n
 * @head: head node in dlistint_t
 * @n: integer value
 * description: function that adds a new node at end of dlistint_t
 * Return: address of new element. Else NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addNode, *pointy;

	addNode = malloc(sizeof(dlistint_t));
	if (!addNode || !head)
		return (NULL);
	addNode->n = n;
	addNode->next = NULL;

	if (*head == NULL)
	{
		addNode->prev = NULL;
		*head = addNode;
		return (addNode);
	}
	else
	{
		for (pointy = *head; pointy->next;
		     pointy = pointy->next)
			; /*find last node in list */
		pointy->next = addNode; /*point to last node in list */
		addNode->prev = pointy;
	}
	return (addNode);
}
