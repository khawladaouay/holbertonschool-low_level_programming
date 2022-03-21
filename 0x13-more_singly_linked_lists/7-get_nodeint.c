#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * @head: head of list
 * @index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{listint_t *ptr = NULL;
	unsigned int i;

	if (head != NULL)
	{
		ptr = head;
		for (i = 0; ptr->next != NULL && i < index; i++)
		{
			ptr = ptr->next;
		}
		if (!ptr)
		{
			return (NULL);
		}
	}
	return (ptr);
}
