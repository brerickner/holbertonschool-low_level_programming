#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - listint_t **head, unsigned int index
 * @head: pointer to node in listint_h
 * @index: index of the node that should be deleted starts at 0
 * description: function that deletes the node at index index of listint_t
 * Return: 1 if successful. Else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_insert, *add;

	new_insert = get_nodeint_at_index(*head, idx);

	if (!new_insert || !(*head))
		return (NULL);

	add = create_node(*head);
	add->next = (*head)->next;
	*head = (*head)->next;

	return (1);
}
