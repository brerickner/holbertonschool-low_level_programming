#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - dlistint_t **head, unsigned int index
 * @head: pointer to node in dlistint_h
 * @index: index to insert node
 * definition: function that deletes the node at index of a dlistint_t
 * Return: 1 if succeeded. Else -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeRemover = *head;

	if (!*head)
		return (-1);
	for (; index != 0; index--)
	{
		if (!nodeRemover)
			return (-1);
		nodeRemover = nodeRemover->next;

	}
	if (nodeRemover == *head)
	{
		*head = nodeRemover->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		nodeRemover->prev->next = nodeRemover->next;
		if (nodeRemover->next != NULL)
			nodeRemover->next->prev = nodeRemover->prev;
	}
	nodeRemover->next = NULL;
	nodeRemover->prev = NULL;
	free(nodeRemover);
	return (1);
}
