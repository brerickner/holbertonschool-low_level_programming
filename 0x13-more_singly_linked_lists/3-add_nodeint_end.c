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
	if (new_node == NULL) /* malloc check */
		return (NULL);
	new_node->next = NULL; /* next ptr to NULL*/
	new_node->n = 0; /* initialize */

	return (new_node);
}
/**
 * *add_nodeint_end - listint_t **head, const int n
 * @head: pointer to node in listint_h
 * @n: integer in node
 * description: function that adds a new node at the end of  listint_t
 * Return: address of new element. Else NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new_node;

	add_new_node = create_node(*head);

	if (*head == NULL)
		*head = add_new_node;
	else
		for (add_new_node = *head; add_new_node->next != NULL;
		     add_new_node = add_new_node->next)
			;
	add_new_node->n = n;
	add_new_node->next = add_new_node;

	return (add_new_node);
}
