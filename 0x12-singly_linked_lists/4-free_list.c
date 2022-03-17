#include "lists.h"

/**
 * free_list - free linkedlist.
 * @head: A pointer to the first element of linkedlist.
 * return: no return (void).
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
