#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *create_node - list_t *head
 * @new_node: pointer to new node
 * description: function that creates a new node
 * Return: ptr to the node created
 */
list_t *create_node(list_t *new_node)
{

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->next = NULL;
	new_node->len = 0;
	return (new_node);
}
/**
 * _strlen - char *s
 * @s: string that is being measured
 *
 * description: function that returns lenth of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int charCount = 0;

	while (s[charCount])
		charCount++;
	return (charCount);
}
/**
 * *add_node - list_t **head, const char *str
 * @head: pointer to start of linked list
 * @str: pointer to string to be added as first node
 * description: function that adds a new node to beggining of list_t
 * Return: address of the new element, else NULL upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = create_node(*head);
	if (str == NULL)
		return (NULL);
	else
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;

	return (add);
}
