#include "lists.h"

/**
 * free_listint2 - free linkedlist.
 * @head: A pointer to the first element of linkedlist.
 * return: no return (void).
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head != NULL)
		p = *head;
	while (p->next)
	{
		*head = p->next;
		free(p);
		p = *head;
	}
	free(*head);
	*head = NULL;
}
