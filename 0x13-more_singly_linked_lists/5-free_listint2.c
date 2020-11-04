#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - listint_t **head
 * @head: pointer to head node address in listint_h
 * description: function that frees a listint_t list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	for (buffer = *head; buffer != NULL; buffer = *head)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}
}
