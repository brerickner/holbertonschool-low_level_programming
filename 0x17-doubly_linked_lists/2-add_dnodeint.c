#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_node - dlistint_t *new_node
 * @new_node: pointer to new node
 * description: function that creates a new node
 * Return: ptr to the node created
 */
dlistint_t *create_node(dlistint_t *new_node, const int n)
{

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	return (new_node);
}
/**
 * *add_dnodeint - dlistint_t **head, const int n
 * @head: head node in dlistint_t
 * @n: integer value
 * description: function that adds a new node at beginning of dlistint_t
 * Return: address of new element. Else NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addNode;

	addNode = create_node(*head, n);
	addNode->next = *head;
	if (*head != NULL)
		(*head)->prev = addNode;
	*head = addNode;

	return (addNode);
}
