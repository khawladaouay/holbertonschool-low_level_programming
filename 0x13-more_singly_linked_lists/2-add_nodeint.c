#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of a list_t list
 * @head: head of list
 * @n: integer to add
 * Return: Address of new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
		newnode->n = n;
		newnode->next = NULL;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
