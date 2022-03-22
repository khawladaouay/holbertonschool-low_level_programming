#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * @head: head of list
 * @index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{listint_t *ptr = NULL;
unsigned int i = 0;

	if (head)
	{
		ptr = head;
		while (ptr)
		{
			if (i == index)
				return (ptr);

			ptr = ptr->next;
			i++;
		}
	}
	return (ptr);

}
