#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: header
 * @n: data
 * Return: int
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = *head;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
		last->next = newnode;
		newnode->prev = last;
return (newnode);
}
