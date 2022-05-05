#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: header
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
