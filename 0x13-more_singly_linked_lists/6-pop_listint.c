#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - listint_t **head
 * @head: pointer to node in listint_h
 * description: function that deletes the head node of lintint_t and returns
 * the head nodes data(n)
 * Return: 0 if linked list empty. Else data of head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *buffer;
	int RETURN;

	if (*head == NULL)
	{
		RETURN = 0;
		return (RETURN);
	}
	else
	{
		for (buffer = *head; buffer != NULL; buffer = *head)
		{
			buffer = (*head)->next;
			RETURN = (*head)->n;
			free(*head);
			break;
		}
		*head = buffer;
	}
	return (RETURN);
}
