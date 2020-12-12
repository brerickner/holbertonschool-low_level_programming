#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - dlistint_t *head
 * @head: pointer to head node in listint_h
 * description: function that returns sum of all the data(n) of dlistint_t
 * Return: 0 if list is empty. Else sum of all the data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int nodes, total = 0;

/*else */
	for (nodes = 0; head; head = head->next, nodes++)
	{
		total += head->n;

	}
	return (total);
}
