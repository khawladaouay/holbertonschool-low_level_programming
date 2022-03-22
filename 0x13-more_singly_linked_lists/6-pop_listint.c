#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t
 * @head: head of list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *p;
int data = 0;

	if (*head != NULL)
	{
		p = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = p;
	}
	return (data);

}
