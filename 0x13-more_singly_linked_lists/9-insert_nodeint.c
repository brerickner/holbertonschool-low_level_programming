#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_t *get_nodeint_at_index - listint_t *head, unsigned int index
 * @head: pointer to head node in listint_h
 * @index: index of nodes in listint_t, starting at 0
 * description: function that returns the nth node of a listint_t linked list
 * Return: nth node of linked list. Else NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int countNodes;

/*loop through link list counting nodes*/
	for (countNodes = 0; (index - 1) > countNodes;
	     head = head->next, countNodes++)
	{
		if (!head)
			return (NULL);
		/*change current head pointer to next of head*/

	}
	return (head);/*if equal to index return head node*/
}

/**
 * *insert_nodeint_at_index - listint_t **head, unsigned int idx, int n
 * @head: pointer to node in listint_h
 * @idx: index of liste where the new node should be added, starts at 0
 * @n: integer listed
 * description: function that inserts a new node at a given position
 * Return: the address of the new node. Else NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_insert, *add;

	new_insert = get_nodeint_at_index(*head, idx);

	if (!new_insert || !(*head))
		return (NULL);

	add = create_node(*head);
	add->next = new_insert->next;
	new_insert->next = add;
	add->n = n;
	*head = (*head)->next;

	return (add);
}
