#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - listint_t *head
 * @head: pointer to head node in listint_h
 * description: function that returns sum of all the data(n) of listint_t
 * Return: 0 if list is empty. Else sum of all the data(n)
 */
int sum_listint(listint_t *head)
{
	int sum;

/*	else */
	for (sum = 0; head; head = head->next, sum++)
	{
		if (head == NULL)
			return (0);

		sum += sum;
	}
	return (sum);
}
