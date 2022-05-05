#include "lists.h"
/**
 * add_dnodeint - adds a new node at the biginning of a list
 * @head: header
 * @n: data
 * Return: int
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

if (*head != NULL)
(*head)->prev = newNode;
*head = newNode;
return (*head);
}
