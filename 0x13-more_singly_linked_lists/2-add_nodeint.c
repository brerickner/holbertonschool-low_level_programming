#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_node - list_t *head
 * @new_node: pointer to new node
 * description: function that creates a new node
 * Return: ptr to the node created
 */
listint_t *create_node(listint_t *new_node)
{

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = 0;

	return (new_node);
}
/**
 * *add_nodeint - listint_t **head, const int n
 * @head: pointer to node in listint_h
 * @n: integer stored
 * description: function that adds a new node at beginning of listint_t
 * Return: address of new element. Else NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = create_node(*head);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
