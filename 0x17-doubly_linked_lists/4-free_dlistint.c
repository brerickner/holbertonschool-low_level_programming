#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - dlistint_t *head
 * @head: pointer to head node in dlistint_h
 * description: function that points to head of dlistint_t list and frees it
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	for (buffer = head; buffer != NULL; head = buffer)
	{
		buffer = head->next;
		free(head);
	}
}
