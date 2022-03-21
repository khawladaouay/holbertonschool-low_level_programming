#include "lists.h"

/**
 * free_listint - free linkedlist.
 * @head: A pointer to the first element of linkedlist.
 * return: no return (void).
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
