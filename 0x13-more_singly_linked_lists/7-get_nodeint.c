#include "lists.h"
#include <stdio.h>

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
	if (!head)
		return (NULL);
/*loop through link list counting nodes*/
	for (countNodes = 0; index > countNodes; countNodes++)
	{
		/*change current head pointer to next of head*/
		head = head->next;
	}
	return (head);/*if equal to index return head node*/
}
