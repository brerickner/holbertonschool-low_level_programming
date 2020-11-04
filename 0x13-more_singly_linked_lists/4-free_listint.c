#include "lists.h"
#include <stdio.h>

/**
 * free_listint - listint_t *head
 * @head: pointer to head node in listint_h
 * description: function that points to head of listint_t list and frees it
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *buffer;

	for (buffer = head; buffer != NULL; buffer = head->next)
	{
		free(head);
		head = buffer;
	}
	free(head);
}
